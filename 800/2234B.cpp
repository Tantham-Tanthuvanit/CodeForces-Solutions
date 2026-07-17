#include <bits/stdc++.h>
using namespace std;

#define int long long

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {

    int n; cin >> n;

    if (n == 10) {
        cout << "-1\n";
    } else if (n % 12 == 10) {
        cout << "22 " << n - 22 << '\n';
    } else {
        cout << n % 12 << ' ' << n - (n % 12) << '\n';
    }
}

signed main() {
    fast_io();

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}