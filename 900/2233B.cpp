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

    vector<int> tmp = {1,2,2,1,2,1,1,2};

    vector<int> ans;

    int currentn = 0;

    if (n % 2 == 0) {
       ans = {1,2,2,1,2,1,1,2}; 
       currentn = 2;
    } else {
        ans = {1,1,2,1,2,3,1,3,2,2,3,3};
        currentn = 3;
    }

    while (currentn < n) {
        for (auto i : tmp) {
            ans.push_back(i + currentn);
        }
        currentn += 2;
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;

}

int main() {
    fast_io();

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
