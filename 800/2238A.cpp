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
    int n,c;
    cin >> n >> c;

    int ans = 0;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        cin >> b[i];

    bool needReorder = false;
    for (int i = 0; i < n; ++i) {
        // arrays need reordering
        if (a[i] < b[i]) needReorder = true;
        // the difference between the 2 values of a[i] and b[i] are added to ans;
        ans += a[i];
        ans -= b[i];
    }

    if (needReorder) {
        needReorder = false;
        ans += c;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i = 0; i < n; ++i) {
            // if any array element of a is still less than b then the arrays cant match
            if (a[i] < b[i]) needReorder = true;
        }
    }

    if (needReorder) cout << "-1\n";
    else cout << ans << '\n';
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}