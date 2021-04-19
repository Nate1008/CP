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

const int INF = 2e9+10;
void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;

	int ans = INF;
	for(int x = 0; x < (1 << (n-1)); x++) {
		int cur = 0, pos = 0;
		for(int i = 0; i <= n; i++) {
			if (i < n) cur |= a[i];
			if (i == n || (x & (1 << i))) {
				pos ^= cur;
				cur = 0;
			}
		}
		ans = min(ans, pos);
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
