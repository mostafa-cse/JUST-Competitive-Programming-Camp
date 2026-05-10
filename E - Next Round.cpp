#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int kth = a[k];

    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    
    if (kth == 0 and a[0] == 0) {
        return cout << 0, 0;
    }

    // above overation done in one operation
    // sort(a.rbegin(), a.rend());

    int ans = 0;
    for (int i : a) {
        if (i >= kth and i != 0) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

/*
Different ways to solve this 
    1. solve manual sort then reverse
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
    
    2. just use rbegin(), rend(). that done sort and reverse together
        sort(a.rbegin(), a.rend())
    
    3. use comparator 
            sort(a.begin(), a.end(), [](int x, int y) {
                return x > y;
            });
*/