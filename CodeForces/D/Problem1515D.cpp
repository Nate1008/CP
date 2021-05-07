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

void solve() {
	int n; cin >> n;
	int l, r; cin >> l >> r;
	vi cl(n, 0), cr(n, 0);
	for(int i = 0; i < l; i++) {
		int x; cin >> x;
		cl[--x]++;
	}
	for(int i = 0; i < r; i++) {
		int x; cin >> x;
		cr[--x]++;
	}

	int ans = n;
	for(int i = 0; i < n; i++) {
		int same = min(cl[i], cr[i]);
		ans -= same*2;
		cl[i] -= same;
		cr[i] -= same;
		l -= same;
		r -= same;
	}

	int limit = abs(l-r)/2;
	int have = 0;
	if (l > r) {
		for(int i = 0; i < n; i++) {
			have += cl[i]/2;
		}
	} else {
		for(int i = 0; i < n; i++) {
			have += cr[i]/2;
		}
	}

	ans -= min(have, limit);
	ans -= min(l, r);

	cout << ans << endl;



}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
