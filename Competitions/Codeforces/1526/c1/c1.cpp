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

const int nax = 2005;
const ll INF = 1e18;

ll dp[nax][nax]; // [position][# of potions i have drunk] = cur health;

void solve() {
	for(int i = 0; i < nax; i++) fill(dp[i], dp[i]+nax, -INF);

	int n; cin >> n;
	vi a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	dp[0][0] = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 0; j <= n; j++) {
			dp[i][j] = dp[i-1][j];
			ll v = dp[i-1][j-1]+(1LL*a[i-1]);
			if (v < 0) v = -INF;
			dp[i][j] = max(dp[i][j], v);
		}
	}
	int ans = 0;
	for(int i = nax-1; i >= 0; i--) {
		// cout << "DP " << i << " " << dp[n][i] << endl;
		if (dp[n][i] >= 0LL) {
			ans = i;
			break;
		}
	}
		
	
	// for(int i = 0; i <= n; i++) {
		// for(int j = 0; j <= n; j++) cout << dp[i][j] << " ";
		// cout << endl;
	// }

	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    // TC
    	solve();

    return 0;
}
