#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;
    string s; cin >> s;
    int z = 0;
    int o = 0;
    for (int i = 0; i < N; i++) {z+=(s[i]=='0');}
    if (s[0]=='1') {cout << z << endl; return;}
    int aa = 1e9;
    for (int i = 0; i < N; i++) {
        o+=(s[i]=='1');
        z-=(s[i]=='0');
        aa=min(aa,o+z);
    }
    cout << aa << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {solve();}
}
