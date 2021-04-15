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
	int n; cin >> n;
	vt<vi> type(2);
	string s, t; cin >> s >> t;
	for(int i = 0; i < n; i++) {
		if (s[i] == t[i]) continue;

		int v = s[i]-'a';
		type[v].pb(i+1);
	}

	if ((sz(type[0]) % 2) ^ (sz(type[1]) % 2)) {
		cout << -1 << nl;
		return;
	}

	int cnt = sz(type[0]) + sz(type[1]) + (sz(type[0]) % 2) + (sz(type[1]) % 2);
	cout << (cnt/2) << nl;
	
	FOR(2, i) {
		for(int v = 0; v < sz(type[i])-(sz(type[i]) % 2); v += 2) {
			cout << type[i][v] << " " << type[i][v+1] << nl;
		}
	}

	if (sz(type[0]) % 2) {
		cout << type[0].back() << " " << type[0].back() << nl;
		cout << type[1].back() << " " << type[0].back() << nl;
	}
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
