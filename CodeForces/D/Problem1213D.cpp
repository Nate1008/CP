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
	int n, k; cin >> n >> k;
	int sum = 0;
	vi a(n);
	for(auto& c : a) {
		cin >> c;
	}
	
	map<int, vi> v;
	for(auto c : a) {
		v[c].pb(0);
		int cnt = 0;
		while(c > 0) {
			c /= 2;
			cnt++;
			v[c].pb(cnt);
		}
	}

	int ans = 1e9+10;
	for(auto [_, val] : v) {
		if (sz(val) >= k) {
			int pos = 0;
			sort(all(val));
			for(int i = 0; i < k; i++) {
				pos += val[i];
			}
			ans = min(ans, pos);
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
