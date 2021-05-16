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
	int n, p, k; cin >> n >> p >> k;
	vi a(n);
	for(auto& c : a) {
		cin >> c;
	}
	

	k = min(p-1, k);
	int m = p-k-1;

	int ans = 0;
	for(int l = 0, r = n-k-1; r < n; l++, r++) {
		int pos = INT_MAX;
		for(int i = l, j = r-m; j <= r; j++, i++) {
			pos = min(pos, max(a[i], a[j]));
		}
		ans = max(ans, pos);
	}
	cout << ans << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    TC
    	solve();

    return 0;
}
