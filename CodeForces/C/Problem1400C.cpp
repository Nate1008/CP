#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORV(a, x) for (auto& a : x)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
    string s; cin >> s;
    int x, n = s.length(); cin >> x;
    string w(n, '1');
    FOR(n, i) {
        if (s[i] == '1') continue;
        if (i+x < n) w[i+x] = '0';
        if (i-x >= 0) w[i-x] = '0';
    }
    FOR(n, i) {
        bool ok = false;
        ok = ok || (i+x < n && w[i+x] == '1');
        ok = ok || (i-x >= 0 && w[i-x] == '1');
        if (s[i] != ok + '0') {
            cout << -1 << endl;
            return;
        }
    }
    cout << w << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC solve();

    return 0;
}
