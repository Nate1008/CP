#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define mi map<int, int>
#define fi first
#define se second
#define vt vector
#define vi vector<int>
#define vl vector<long long>
#define st set

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb(s) push_back(s);
#define ppb(s) pop_back(s);


#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

const int INF = 1e9+10;

void fix(vt<vi>& b, int i, int shift) {
	int n = sz(b[i]);
	sort(all(b[i]));
	vi a(n);
	for(int x = 0; x < n; x++) {
		int j = (x+shift)%n;
		// cout << x+shift << " ";
		a[j] = b[i][x];
	}
	// cout << nl;
	b[i] = a;
}

void solve() {
	int n, m; cin >> n >> m;

	vt<vi> b(n, vi(m));
	vi c(n, 0);
	vt<pi> a;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> b[i][j];
			a.pb(make_pair(b[i][j], i));
		}
	}
	sort(all(a));
	for(int i = 0; i < m; i++) {
		c[a[i].se]++;
	}
	int cur = 0;
	for(int i = 0; i < n; i++) {
		if (c[i] == 0) continue;
		fix(b, i, cur);
		// cout << i << nl;
		cur += c[i];
		if (cur >= m) break;
	}
	for(auto& v : b) {
		for(auto u : v) cout << u << " ";
		cout << nl;
	}	
	
}	


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
