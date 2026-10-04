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
    int n,k;
    cin >> n >> k;
    
    vector<int> wishLim(k,0);
    vector<int> wishInit(n, 0);

    for (int i = 0; i < k; ++i)
        cin >> wishLim[i];

    for (int i = 0; i < n; ++i)
        cin >> wishInit[i];


}

int main() {
    return 0;
}
