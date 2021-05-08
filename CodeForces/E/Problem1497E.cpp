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
	vi a(n);
	for(auto& c : a) cin >> c;

	for(int i = 0; i < n; i++) {
		int v = a[i];
		mi cnt;
		for(int j = 2; (j*j) <= v; j++) {
			while(v % j == 0) {
				cnt[j]++;
				v /= j;
			}
		}
		if (v > 1) cnt[v]++;

		v = 1;
		for(auto [c, amt] : cnt) {
			if (amt % 2 == 0) continue;
			v *= c;
		}
		a[i] = v;
	}

	unordered_set<int> cur = {};
	int ans = 1;
	for(int i = 0; i < n; i++) { 
		if (cur.find(a[i]) == cur.end()) {
			cur.insert(a[i]);
		} else {
			ans++;
			cur = {a[i]};
		}
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
