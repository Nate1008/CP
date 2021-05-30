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
	int n, k; cin >> n >> k;
	vt<pi> a(n);
	mi cnt;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		cnt[x]++;
		a[i] = {x, i};
	}
	int mx = 0;
	for(auto [_, v] : cnt) {
		mx = max(mx, v);
	}
	if (mx > k) {
		cout << "NO" << endl;
		return;
	}

	sort(all(a));
	vi ans(n);
	for(int i = 0, cur = 0; i < n; i++, cur++, cur %= k) {
		ans[a[i].second] = cur;
	}
	
	cout << "YES" << endl;
	for(auto v : ans) cout << v+1 << " ";
	cout << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    // TC
    	solve();

    return 0;
}
