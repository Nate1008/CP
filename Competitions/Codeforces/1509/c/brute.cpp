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

const ll INFL = 1e17+100;
const int INF = 1e9+10;
void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;
	sort(all(a));

	ll best = INFL;
	vt<vi> ans;
	do {
		ll pos = 0;
		int mx = 0, mn = INF;
		for(int i = 0; i < n; i++) {
			mn = min(a[i], mn), mx = max(mx, a[i]);
			pos += (mx-mn);
		}
		if (pos == best) {
			ans.pb(a); 
		} else if (pos < best) {
			best = pos;
			ans = {};
			ans.pb(a);
		}

	} while(next_permutation(all(a)));

	cout << best << nl;
	for(auto c : ans) {
		for(auto v : c) {
			cout << v << " ";
		}
		cout << nl;
	}
	// int mx = 0, mn = INF;
	// ll cur = 0;
	// cout << nl;
	// for(int i = 0; i < n; i++) {
	// 	mn = min(mn, ans[i]);
	// 	mx = max(mx, ans[i]);
	// 	cur += (mx-mn);
	// 	cout << mx << " " << mn << nl;
	// 	cout << cur << nl;
	// 	cout << nl;
	// }

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
