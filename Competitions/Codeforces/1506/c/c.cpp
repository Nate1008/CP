#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<int, pi>
#define mi map<int, int>
#define ml map<long long, int>
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
// #define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	string s, t; cin >> s >> t;
	int n = s.size(), m = t.size();
	int mn = min(n, m);
	set<string> si, ti;
	string a;
	for(int x = 1; x <= mn; x++) {
		for(int i = 0; i <= n-x; i++) {
			a = s.substr(i, x);
			// cout << a << nl;
			si.insert(a);
		}
	}

	for(int x = 1; x <= mn; x++) {
		for(int i = 0; i <= m-x; i++) {
			a = t.substr(i, x);
			// cout << a << nl;
			ti.insert(a);
		}
	}

	int len = 0;
	for(auto c : si) {
		for(auto v : ti) {
			// cout << c << " " << v << nl;
			if (c == v) {
				len = max(len, sz(c));
			}
		}
	}
	cout << (n+m)-(2*len) << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
