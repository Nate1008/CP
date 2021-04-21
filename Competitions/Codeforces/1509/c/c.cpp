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
const int MAX = 2e3+100;
const ll INF = (1LL << 60);
ll dp[MAX][MAX];


void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) {
		cin >> c;
	}

	sort(all(a));

	memset(dp, INF, sizeof dp);
	for (int i = 0; i < n; i++) dp[i][i] = 0;
	for(int w = 1; w < n; w++) {
		for(int l = 0; l+w < n; l++) {
			int r = l+w;
			dp[l][r] = min(dp[l+1][r], dp[l][r-1]) + (a[r] - a[l]);
		}
	}
	cout << dp[0][n-1] << nl;

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}



// mi cnt;
// bool cmp(int a, int b) {
// 	if (cnt[a] == cnt[b]) {
// 		return a < b;
// 	}
// 	return cnt[a] > cnt[b];
// }

// void solve() {
// 	int n; cin >> n;
// 	vi a(n);
// 	for(auto& c : a) {
// 		cin >> c;
// 		cnt[c]++;
// 	}
// 	sort(all(a), cmp);

// 	ll ans = 0;
//  	int mn = INF, mx = 0;
//  	for(auto c : a) {
//  		mn = min(mn, c), mx = max(mx, c);
//  		ans += (mx-mn);
//  	}
//  	cout << ans << nl;

// }	

// void solve() {
// 	int n; cin >> n;
// 	vi a(n);
// 	for(auto& c : a) {
// 		cin >> c;
// 		cnt[c]++;
// 	}
// 	sort(all(a));

// 	int pos = 0;
// 	while(pos < n-1 && cnt[a[pos]] < cnt[a[pos+1]]) {
// 		int tmp = pos;
// 		pos += cnt[a[pos+1]];
// 		swap(a[tmp], a[pos]);
// 	}

// 	ll ans = 0;
// 	int mn = INF, mx = 0;
// 	for(auto& c : a) {
// 		mn = min(c, mn), mx = max(c, mx);
// 		ans += (mx-mn);
// 	}
// 	cout << ans << nl;
// }	