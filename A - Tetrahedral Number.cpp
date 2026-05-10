// 
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()

int32_t main() {
    int n;
    cin >> n;

    vector<array<int, 3>> a;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                if (i + j + k <= n) {
                    a.push_back({i, j, k});
                }
            }
        }
    }
    sort(all(a));

    for (auto [i, j, k] : a) {
        cout << i << " " << j << ' ' << k << endl;
    }

    return 0;
}

/*
    vector<X> a;
    you have to store constant 3 element. 
    1. vector< array<int, 3> > a
        set element : 
            a.push_back({i, j, k})

        can acess by 
            first element : a[i][0]
            second element : a[i][1]
            third element : a[i][2]

    2. vector< pair<int, pair<int, int>> > a
        set element: 
            a.push_back({i, {j, k}});
        can acess by 
            first element : a[i].first.first
            second element : a[i].second.first
            third element : a[i].second.second

    3. vector<vector<int>> a
        set element: 
            a.push_back({i, j, k});

        can acess by 
            first element : a[i][0]
            second element : a[i][1]
            third element : a[i][2]

    4. use a structure
        struct info {
            // Properties
            int i, j, k;

            // constructor
            info(int _i, int _j, int _k) {
                i = _i;
                j = _j;
                k = _k;
            }
            
            // another way to make constructor
            info(int _i, int _j, int _k): i(_i), j(_j), k(_k) {}

            // methode
            void print() {
                cout << i << " " << j << " " << k << endl; 
            }
        };
        declare;
            vector<info> a;

        set element: 
            a.push_back({i, j, k});

        acess element: 
            first element: a[i].i
            second element: a[i].j
            third element: a[i].k
*/
