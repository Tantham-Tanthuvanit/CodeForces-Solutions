#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

ll count_chain(const string& s, int start) {
    // dp[0] = ways where current character is 0
    // dp[1] = ways where current character is 1

    ll dp[2] = {0, 0};

    // Initialize using the first character of this chain
    char c = s[start];

    if (c == '?' || c == '0')
        dp[0] = 1;

    if (c == '?' || c == '1')
        dp[1] = 1;

    // Process the rest of the chain
    for (int i = start + 2; i < (int)s.size(); i += 2) {
        ll new_dp[2] = {0, 0};

        if (s[i] == '?') {
            // Current character can be 0 or 1,
            // but it must differ from the previous character.

            new_dp[0] = dp[1];
            new_dp[1] = dp[0];
        }
        else if (s[i] == '0') {
            // Current character is 0,
            // so previous character must be 1.

            new_dp[0] = dp[1];
        }
        else { // s[i] == '1'
            // Current character is 1,
            // so previous character must be 0.

            new_dp[1] = dp[0];
        }

        dp[0] = new_dp[0];
        dp[1] = new_dp[1];
    }

    return (dp[0] + dp[1]) % MOD;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // Odd positions: indices 0, 2, 4, ...
    ll odd = count_chain(s, 0);

    // Even positions: indices 1, 3, 5, ...
    ll even = count_chain(s, 1);

    cout << (odd * even) % MOD << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
