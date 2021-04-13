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

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void chmax(int& a, int b) {
	a = max(a, b);
}


void solve() {
	int n, m, k; cin >> n >> m >> k;
	vi a(n), b(m);
	for(auto& c : a) cin >> c;
	for(auto& c : b) cin >> c;

	vt<pi> div;
	for(int i = 1; (i*i) <= k; i++) {
		if (k % i == 0) {
			div.pb(pi(i, (k/i)));
			// if (k/i == i) continue;
			// div.pb(pi((k/i), i));
		}
	}


	vt<vi> seg(2);
	int cur = 0;

	for(int i = 0; i < n; i++) {
		cur += a[i];
		if (a[i] == 0 && cur > 0) {
			seg[0].pb(cur);
			cur = 0;
		}
	}
	if (cur > 0) {
		seg[0].pb(cur);
	}

	cur = 0;
	for(int i = 0; i < m; i++) {
		cur += b[i];
		if (b[i] == 0 && cur > 0) {
			seg[1].pb(cur);
			cur = 0;
		}
	}
	if (cur > 0) {
		seg[1].pb(cur);
	}

	ll ans = 0;
	for(auto& p : div) {
		
		int ah = 0, av = 0;
		for(auto& c : seg[0]) {
			ah += (c >= p.fi ? c-(p.fi-1) : 0);
			av += (c >= p.se ? c-(p.se-1) : 0);
		}

		int bh = 0, bv = 0;
		for(auto& c : seg[1]) {
			bh += (c >= p.fi ? c-(p.fi-1) : 0);
			bv += (c >= p.se ? c-(p.se-1) : 0);
		}

		ans += (ah*1LL*bv);
		if (p.fi != p.se) ans += (bh*1ll*av);
	}
	cout << ans << nl;



}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
