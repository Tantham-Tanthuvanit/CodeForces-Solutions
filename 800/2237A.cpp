#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    #endif
}

void solve() {

    int n; cin >> n;
    vector<int> vec(n,0);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    // check if towers are in decending order
    bool decending = false;
    int sum = 0;
    for (int i = 0; i < n-1; ++i) {
        if (vec[i] < vec[i+1]) decending = true;
        sum += vec[i];
    }
    sum += vec[n-1];

    if (!decending) {
        cout << sum << '\n';
        return;
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; ++i) {
        // retain minimum to achieve O(n) instead of n^2
        if (vec[i] > mn) {
            vec[i] = mn;
        }
        mn = min(mn,vec[i]);
    }

    // recount sum
    sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
    }

    cout << sum << '\n';

}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
