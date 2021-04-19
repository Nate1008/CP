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
	int a, b, w; cin >> a >> b >> w;

	int mn = 1e9+10, mx = 0;
	for(int n = 1; n <= 1e6+10; n++) {
		if ((a*n) <= (1000*w) && (1000*w) <= (b*n)) {
			mn = min(mn, n), mx = max(mx, n);
		}
	}
	if (mx == 0) {
		cout << "UNSATISFIABLE" << nl;
		return;
	}
	cout << mn << " " << mx << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
