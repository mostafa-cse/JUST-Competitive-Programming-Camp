#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    // main Purpose of learning
    int sum = accumulate(a.begin(), a.end(), 0ll); // don't forget to use 0ll
    
    cout << sum;
    return 0;
}