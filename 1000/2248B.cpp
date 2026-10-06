#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {
    int n,m;
    cin >> n >> m;

    // must input both arrays first if not then the input order will be incorrect
    vi a(n);
    vi b(m);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < m; ++i)
        cin >> b[i];

    if (n < m*2) {
        cout << "NO\n";
        return;
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for (int i = b.size()-1; i >= 0; --i) {
        if (a[i] < b[i] && b[i] < a[n-m+i]) {
            continue;
        } else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    return;
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
