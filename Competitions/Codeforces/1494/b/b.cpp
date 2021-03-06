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
#define si set<int>
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
bool ok = false;
void solve() {
	int n, u, r, d, l; cin >> n >> u >> r >> d >> l;

	// FIX U
	if (u > (n-2)) {
		if (u == n) {
			r--, l--;
		} else if (u == n-1) {
			if (r > l) {
				r--;
			} else l--;
		}
		u = 0;
	}

	// FIX R
	if (r > (n-2)) {
		if (r == n) {
			u--, d--;
		} else if (r == n-1) {
			if (d > u) {
				d--;
			} else u--;
		}
		r = 0;
	}

	// FIX D
	if (d > (n-2)) {
		if (d == n) {
			r--, l--;
		} else if (d == n-1) {
			if (r > l) {
				r--;
			} else l--;
		}
		d = 0;
	}

	// FIX L
	if (l > (n-2)) {
		if (l == n) {
			u--, d--;
		} else if (l == n-1) {
			if (d > u) {
				d--;
			} else u--;
		}
		l = 0;
	}

	ok = (u >= 0 && u <= n-2 
		&& d >= 0 && d <= n-2 
		&& r >= 0 && r <= n-2 
		&& l >= 0 && l <= n-2);
	cout << (ok ? "YES" : "NO") << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
