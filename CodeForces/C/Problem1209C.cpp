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
// 040425524644
// 002244444556
void solve() {
	int n; cin >> n;
	string s; cin >> s;
	vi a(n);
	for(int i = 0; i < n; i++) a[i] = s[i]-'0';

	vi b = a;
	sort(all(b));
	vi c, ans(n, 2);
	for(int i = 0, j = 0; j < n && i < n; i++, j++) {
		while(j < n && a[j] != b[i]) {
			c.pb(a[j]);
			j++;
		}
		if (j == n) break;
		ans[j] = 1;
	}
	bool ok = true;
	for(int i = 1; i < int(size(c)); i++) {
		ok &= c[i-1] <= c[i];
	}
	if (!ok) {
		cout << "-" << endl;
		return;
	}
	for(auto x : ans) cout << x;
	cout << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
