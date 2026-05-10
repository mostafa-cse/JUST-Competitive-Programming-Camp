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

    reverse(a.begin(), a.end()); // main purpose
    // reverse(begin(a), end(a)); both are same

    for (int i : a) {
        cout << i << " ";
    }

    return 0;
}