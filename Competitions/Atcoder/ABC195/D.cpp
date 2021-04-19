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

void solve() {
	int n, m, q; cin >> n >> m >> q;
	vt<pi> b(n);
	for(auto& p : b) {
		cin >> p.se >> p.fi;
		// cout << p.fi << "::" << p.se << nl;
	}
	
	sort(all(b), [](pi a, pi b) {
		if (a.fi == b.fi) return a.se < b.se;
		else return a.fi > b.fi;
	});

	vi x(m);
	for(auto& c : x) {
		cin >> c;
	}

	FOR(q, _) {
		int l, r; cin >> l >> r;
		l--, r--;
		// cout << l << "::" << r << nl;
		vi can;
		int ans = 0;
		for(int i = 0; i < m; i++) {
			if (i >= l && i <= r) continue;
			can.pb(x[i]);
		}

		sort(all(can));
		vi used(n, 0);
		for(auto c : can) {
			int j = 0; 
			while(j < n && (used[j] || b[j].se > c)) j++;
			if (j >= n) continue;
			used[j] = 1;
			ans += b[j].fi;
		}
		cout << ans << nl;
	}

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
