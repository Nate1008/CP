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
	int n, l, r; cin >> n >> l >> r;
	vi a, b(n);
	FOR(n, i) cin >> b[i];
	sort(all(b));
	ll ans = 0;
	FOR(n, i) {
		int x = b[i];
		int lo = int(lower_bound(all(a), l-x)-begin(a));
		int hi = int(upper_bound(all(a), r-x)-begin(a));
		// cout << x << endl;
		/*cout << lo << " " << hi << endl;
		cout << max(hi-lo, 0) << endl;
		cout << endl;*/
		ans += max(hi-lo, 0);
		a.push_back(x);
	}
	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

