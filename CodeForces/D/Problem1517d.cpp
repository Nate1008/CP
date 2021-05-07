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

const int INF = 1e9+10;
void solve() {
	int n, m, k; cin >> n >> m >> k;
	vt<vi> up(n, vi(m)), down(n, vi(m)), 
	left(n, vi(m)), right(n, vi(m));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m-1; j++) {
			int x; cin >> x;
			up[i][j] = x;
			down[i][j+1] = x;
		}
	}

	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < m; j++) {
			int x; cin >> x;
			left[i][j] = x;
			right[i+1][j] = x;
		}
	}

	if (k % 2) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cout << -1 << " ";
			}
			cout << endl;
		}
		return;
	}
	vt<vt<vi>> dp((k/2)+1, vt<vi>(n, vi(m)));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			dp[0][i][j] = 0;
		}
	}
	for(int x = 1; x <= k/2; x++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				dp[x][i][j] = INF;
				if (i != n-1) dp[x][i][j] = min(dp[x-1][i+1][j]+left[i][j], dp[x][i][j]);
				if (i != 0) dp[x][i][j] = min(dp[x-1][i-1][j]+right[i][j], dp[x][i][j]);
				if (j != m-1) dp[x][i][j] = min(dp[x-1][i][j+1]+up[i][j], dp[x][i][j]);
				if (j != 0) dp[x][i][j] = min(dp[x-1][i][j-1]+down[i][j], dp[x][i][j]);
			}
		}
	}
	// assert(false);
	k /= 2;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << dp[k][i][j]*2 << " ";
		}
		cout << endl;
	}
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
