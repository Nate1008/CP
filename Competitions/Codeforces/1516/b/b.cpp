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

int pfx[2005];
void solve() {
	int n; cin >> n;
	vi a(n);
	pfx[0] = 0;
	FOR(n, i) {
		int x; cin >> x;
		pfx[i+1] = x^pfx[i];
	}
	if (pfx[n] == 0) { 
		cout << "YES" << nl;
		return;
	}
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; ++j) {
			if (pfx[i] == (pfx[i]^pfx[j]) && pfx[i] == (pfx[n]^pfx[j])) {
				cout << "YES" << nl;
				return;
			}
		}
	}
	cout << "NO" << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
