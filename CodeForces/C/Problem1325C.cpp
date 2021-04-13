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

bool cmp(vi a, vi b) {
	return a.size() > b.size();
}

void solve() {

	int n; cin >> n;
	vt<vi> a(n);
	vt<pi> p;
	vi c(n), ans(n-1, -1);

	FOR(n-1, i) {
		int x, y; cin >> x >> y;
		x--, y--;

		c[x]++, c[y]++;
		a[x].pb(i);
		a[y].pb(i);
		p.pb(pi(x, y));
	}

	sort(all(a), cmp);
	int cur = 0;
	for(int i = 0; i < n; i++) {
		for(auto& c : a[i]) {
			if (ans[c] != -1) continue;
			ans[c] = cur;
			cur++;
		}
	}

	for(auto c : ans) cout << c << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
