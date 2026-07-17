#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

// if string contains 3 of same letter than equal bigram can be made
// if string contains 2 alternating letters than equal bigram can be made
// if string does not contain any of those then its impossible

void solve() {
    int k; cin >> k;
    bool moreThan1 = false;
    vector<int> cnt(k,0);

    // input
    for (int i = 0; i < k; ++i) {
        cin >> cnt[i];
    }

    for (int i = 0; i < cnt.size(); ++i) {
        if (cnt[i] >= 3) {
            cout << "YES" << endl;
            return;
        } else if (cnt[i] >= 2) {
            if (moreThan1) {
                cout << "YES" << endl;
                return;
            }
            moreThan1 = true;
        }
    }

    cout << "NO" << endl;
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