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
    int n,k;
    cin >> n >> k;
    string s; cin >> s;

    vector<int> cnt(k,0);
    for (int i = 0; i < n; ++i) {
        cnt[i%k] += s[i] - '0';
    }
    bool ok = true;
    for (int v = 0; v < k; ++v) {
        if (cnt[v] % 2 ){
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}