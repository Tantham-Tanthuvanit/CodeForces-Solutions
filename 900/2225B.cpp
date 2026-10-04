#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size() - 1; ++i) {
        ans += (s[i] == s[i+1]);
    }
    cout << (ans <= 2 ? "YES" : "NO") << '\n';
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
