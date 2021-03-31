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

struct Customer {
	int t, l, h;
};

void read(Customer& c) {
	cin >> c.t >> c.l >> c.h;
}
bool ok = false, pos = true;
void solve() {
	int n, s; cin >> n >> s;
	vt<Customer> c(n);
	FOR(n, i) {
		read(c[i]);
	}
	int mn = s, mx = s, last = 0;
	pos = true;
	FOR(n, i) {
		ok = false;
		int d = c[i].t-last;
		int mxx = mx+d, mnn = mn-d;
		// cout << mn << " " << mx << nl;	

		if (min(c[i].h, mxx)-max(c[i].l, mnn) >= 0) {
			mn = max(c[i].l, mnn), mx = min(c[i].h, mxx);
		} else {
			pos = false;
			break;
		}

		last = c[i].t;
	}

	cout << (pos ? "YES" : "NO") << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
