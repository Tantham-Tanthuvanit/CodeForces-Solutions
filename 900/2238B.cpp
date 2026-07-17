#include <bits/stdc++.h>
using namespace std;

// gcd(lcm(a,b),lcm(b,c)) = gcd(a,c)
// this formula just means that b is a divisor of a and c since lcm a,b is a
// which then means a is divisible by b and the same goes for c
// which then means a and c are multiples of b

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {
    long long n; cin >> n;

    long long total_triplets = 0;

    for (long long b = 1; b <= n; ++b) {
        long long m = n / b;
        total_triplets += m*m;
    }
    cout << total_triplets << endl;
}

int main() {

    fast_io();

    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}