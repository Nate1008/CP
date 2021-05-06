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
	int n, m; cin >> n >> m;
	vt<pi> a(m);
	vl ans(m);
	long long sum = 0;
	for(int i = 0; i < m; i++) {
		int x; cin >> x;
		a[i] = {x, i};
		sum += x;
	}
	if (sum < n) {
		cout << -1 << nl;
		return;
	}

	long long dif = sum-n;
	ans[a[0].second] = 1;
	long long cur = a[0].first+1;
	long long len = a[0].first;
	for(int i = 1; i < m; i++) {
		long long move = min(dif, cur-(cur-a[i-1].first+1));
		dif -= move;
		cur -= move;
		ans[a[i].second] = cur;
		cur += a[i].first;
		len = max(len, cur-1);
	}
	if (len != n) {
		cout << -1 << endl;
		return;
	}

	for(auto v : ans) cout << v << " ";
	cout << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
