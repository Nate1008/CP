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

bool ok = true;
void solve() {
	int n; cin >> n;
	vt<string> a(3);
	for(auto& s : a) cin >> s;



	for(auto& s : a) {
		for(auto& t : a) {
			if (s == t) continue;
			ok = 1;
			for(int i = n, j = 0; i < 2*n && j < n; i++, j++) {
				ok &= (s[i] == t[j]);
			}
			if (ok) {
				cout << s+t.substr(n) << nl;
				// cout << s << " " << t << nl;
				return;
			}
		}
	}
	cout << -1 << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
