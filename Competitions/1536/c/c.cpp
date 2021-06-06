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

const int nax = 5e5+10;
int dp[nax][2][3]; // [pos][0 for leave, 1 for take][0 - d, 1 - k, 2 - best];
void solve() {

	FOR(nax, i) FOR(2, j) FOR(3, k) dp[i][j][k] = -1;

	unordered_map<ll, int> ratio;

	int n; cin >> n;
	string s; cin >> s;

	dp[0][0][0] = 0;
	dp[0][0][1] = 0;
	dp[0][0][2] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i][0][0] = dp[i-1][1][0];
		dp[i][1][0] = dp[i-1][1][0];
		dp[i][0][1] = dp[i-1][1][1];
		dp[i][1][1] = dp[i-1][1][1];
		dp[i][0][2] = dp[i-1][1][2];
		dp[i][1][2] = dp[i-1][1][2];

		if (s[i-1] == 'K') dp[i][1][1]++, dp[i][0][1]++;
		if (s[i-1] == 'D') dp[i][1][0]++, dp[i][0][0]++;

		ll pro = dp[i][0][1]*1LL*dp[i][0][0];
		cout << pro << " " << ratio[pro] << endl;
		dp[i][0][2] = max(ratio[pro]+1, dp[i][0][2]);
		ratio[pro] = max(ratio[pro], dp[i][0][2]);

	}


	for(int i = 1; i <= n; i++) cout << dp[i][0][2] << " ";
	cout << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	


    TC
    	solve();

    return 0;
}
