#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long ans = 1e9, sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += a[i];
        ans = min(ans,sum / (i+1));

        cout << ans << ' ';
    }

    cout << '\n';
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
