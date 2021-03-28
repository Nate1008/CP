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

void solve() {
	// INTEGER OVERFLOW
	int n, h; cin >> n >> h;
	vi a(n);
	for(int i = 0; i < n; i++) { 
		cin >> a[i];
	}

	int lb = 0, hb = n, mb;
	bool pos = false;
	while(lb < hb) {
		// cout << lb << " " << hb << nl;
		mb = lb+(hb-lb+1)/2;
		vi c;
		for(int i = 0; i < mb; i++) {
			c.pb(a[i]);
		}
		sort(all(c));
		if (sz(c) % 2) {
			c.insert(c.begin(), 0);
		}
		pos = true;
		ll cur = 0;
		// cout << mb << " ::: " << nl;
		for(int i = sz(c)-1; i > 0; i-=2) {
			cur += max(c[i], c[i-1]);
			// cout << cur << nl;
			if (cur > h) {
				pos = false;
			}
		}
		if (pos) {
			lb = mb;
		} else {
			hb = mb-1;
		}
	}
	cout << lb << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
