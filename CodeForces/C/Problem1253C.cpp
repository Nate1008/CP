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
	int n, m; cin >> n >> m;
	vl a(n);
	for(auto& c : a) cin >> c;

	sort(all(a));

	vl pfx(n), ans(n);
	ans[0] = pfx[0] = a[0];
	for(int i = 1; i < m; i++) {
		pfx[i] = a[i]+pfx[i-1];
		ans[i] = pfx[i];
	}
	for(int i = m; i < n; i++) {
		pfx[i] = a[i]+pfx[i-1];
		ans[i] = pfx[i]+ans[i-m];
	}
	for(int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}


}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
