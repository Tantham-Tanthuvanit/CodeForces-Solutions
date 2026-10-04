#include <bits/stdc++.h>
#include <random>
#include <string>
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
    string s; cin >> s;

    int len = 1;
    char last = s[0];

    int op = 0;


    if (s[0] == '1') {
        for (int i = 0; i < s.size(); ++i) {
            op += '1' - s[i];
        }
    } else {
        vector<string> chunks;
        for (int i = 1; i < n; ++i) {
            if (s[i] != last) {
                string a(len,last);
                chunks.push_back(a);
                len = 0;
            }
            last = s[i];
            len++;
        }

        string a(len,last);
        chunks.push_back(a);

        for (int i = 1; i < chunks.size(); ++i) {
            if (chunks[i][0] == '1') continue;
            op += min(chunks[i].size(),chunks[i-1].size());
        }
    }
    cout << op << endl;
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
