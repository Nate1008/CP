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

bool cmp(pair<pi, int> i, pair<pi, int> j) {
	if (i.first.second != j.first.second) return i.first.second < j.first.second;
	if (i.first.first != j.first.first) return i.first.first < j.first.first;
	return i.second < j.second;
}

void solve() {
	int n; cin >> n;
	vt<pair<pi, int>> a(n);
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a[i] = {{x, y}, i};
	}
	sort(all(a), cmp);

	int mn = a[n-1].first.first;
	for(int i = n-2; i >= 0; i--) {
		if (a[i].first.second < mn) {
			// cout << "HERE" << endl;
			vector<int> ans(n, 2);
			for(int j = 0; j <= i; j++) {
				ans[a[j].second] = 1;
			}
			for(auto t : ans) cout << t << " ";
			cout << endl;
			return;
		}
		mn = min(mn, a[i].first.first);
	}
	cout << -1 << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
