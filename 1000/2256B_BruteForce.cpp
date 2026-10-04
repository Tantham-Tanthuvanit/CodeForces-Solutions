#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    (void)freopen("input.txt","r",stdin);
    #endif
}

void generate(string& s, string& orig, int i, vector<string>& res) {
    int n = s.size();

    if (n == i) {
        res.push_back(s);
        return;
    }

    if (orig[i] == '?') {
        s[i] = '0';
        generate(s,orig,i+1,res);

        s[i] = '1';
        generate(s,orig,i+1,res);    
    } else {
        s[i] = orig[i];
        generate(s,orig,i+1,res);
    }
}

bool check_res(string s) {
    vector<int> weights;
    for (int i = 0; i < s.size()-1; ++i) {
        int w = (s[i] - '0') + (s[i+1] - '0');
        weights.push_back(w);
    }

    for (int i = 1; i < weights.size(); ++i) {
        if (weights[i-1] == weights[i])  return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string tmp(n,'0');

    vector<string> res;

    generate(tmp,s,0,res);

    int rescnt = 0;

    // check results
    for (int i = 0; i < res.size(); ++i) {
        if (check_res(res[i]))
            rescnt++;
    }

    cout << rescnt << endl;
}

int main() {
    fast_io();

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
