#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<int, pi>
// #define mi map<int, int>
#define ml map<long long, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

const ll INF = 1e18+10;
void solve() {
	ll n, m, k, ta, tb; cin >> n >> m >> ta >> tb >> k;
	vl a(n), b(m);
	FOR(n, i) {
		cin >> a[i];
		a[i] += ta;
	}
	FOR(m, i) {
		cin >> b[i];
	}

	sort(all(a)), sort(all(b));

	if (k >= min(n, m)) {
		cout << -1;
		return;
	}

	ll ans = 0;
	for(int x = 0; x < n; x++) {
		if (x > k) continue;
		ll fir = a[x];
		int lo = 0, hi = m, y;
		while(lo < hi) {
			y = (lo+hi)/2;
			if (b[y] >= fir) hi = y;
			else lo = y+1;
		}

		int idx = lo+(k-x);
		// cout << idx << nl;
		if (idx >= m) {
			ans = INF;
		} else ans = max(ans, b[idx]);
	} 

	cout << (ans == INF ? -1 : ans+tb);

}
/*

10 11 4 5 10
1 2 3 4 5 6 7 8 9 10
16 17 18 19 20 21 22 23 24 25 26

*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
