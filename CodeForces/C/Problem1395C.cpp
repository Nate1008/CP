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

bool ok = false, good = true;
void solve() {
	int n, m; cin >> n >> m;
	vi a(n), b(m);
	for(auto& c : a) cin >> c;
	for(auto& c : b) cin >> c;


	
	for(int x = 0; x < (1 << 9); x++) {
		good = true;
		for(auto v : a) {
			ok = false;
			for(auto u : b) {
				int c = (v&u);
				ok |= ((c|x) == x);
			}
			good &= ok;
		}
		if (good) {
			cout << x << nl;
			return;
		}
	}
	cout << -1 << nl;





	// for(int i = 0; i < n; i++) {
	// 	int u = a[i];
	// 	for(auto v : b) {
	// 		int c = u&v; 
	// 		ans[i] = min(ans[i], c);
	// 	}
	// }

	// int ret = ans[0];
	// cout << ans[0] << " ";
	// for(int i = 1; i < n; i++) {
	// 	ret |= ans[i];
	// 	cout << ans[i] << " ";
	// }
	// cout << ret << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
