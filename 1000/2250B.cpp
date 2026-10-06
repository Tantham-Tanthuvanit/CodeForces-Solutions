#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie( nullptr );
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void solve() {
    int n; int k;
    cin >> n >> k;

    // check for k > n-2
    
    if (k == n-1) {
        cout << -1 << endl;
        return;
    }

    // cout << n << ' ' << k << endl;

    string ones(ceil(n/2.0),'1');
    string zeros(floor(n/2.0),'0');
    string back;

    int i;

    for (i = n-2; i > k+1; i-=2) {
    //    cout << i << ' ' << ones + zeros + back;
        ones.pop_back();
        zeros.pop_back();
        back += "10";
    }

    // cout << i << endl;
    if (i == k+1) {
        ones.pop_back();
        back += "1";
    }

    cout << ones + zeros + back << endl;
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
