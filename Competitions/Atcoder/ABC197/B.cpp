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

vt<pi> delta = {pi(-1, 0), pi(1, 0), pi(0, -1), pi(0, 1)};
void solve() {
	int h, w, a, b; cin >> h >> w >> b >> a;
	vt<string> v(h);
	for(auto& c : v) {
		cin >> c;
	}
	--a, --b;

	int ans = 1;
	for(auto dir : delta) {
		int x = a, y = b;
		while(true) {
			x += dir.fi;
			y += dir.se;
			// cout << x << " " << y << nl;
			if (x < 0 || x >= w || y < 0 || y >= h) break;
			// cout << v[y][x] << nl;

			if (v[y][x] == '#') break;
			ans++;
		}
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
