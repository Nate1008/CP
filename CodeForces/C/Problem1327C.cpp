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
	int n, m, k; cin >> n >> m >> k;
	for(int i = 0; i < (2*k); i++) {
		int x, y; cin >> x >> y;
	}
	string s;
	for(int i = 0; i < m-1; i++) {
		s += "L";
	}
	for(int i = 0; i < n-1; i++) {
		s += "U";
	}

	int x = 0, y = 0;
	for(int i = 0; i < n; i++) {
		if (i % 2) {
			for(int j = 0; j < m-1; j++) {
				s += "L";	
			}
		} else {
			for(int j = 0; j < m-1; j++) {
				s += "R";
			}
		}
		s += "D";
	}
	cout << sz(s) << nl;
	cout << s << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
