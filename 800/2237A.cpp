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

    if (decending) {
        cout << sum << '\n';
        return;
    }

    for (int i = 0; i < n+1; ++i) {
        for (int v = 1; v < n; ++v) {
            if (vec[i] < vec[v]) 
                vec[v] = vec[i];
        }
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