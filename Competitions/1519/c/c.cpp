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
	int n; cin >> n;
	vi b(n);
	for(auto& c : b) {
		cin >> c;
	}
	vt<vl> u(n);
	for(int i = 0; i < n; i++) {
		int s; cin >> s;
		u[b[i]-1].pb(s);
	}

	vl ans(n, 0);
	for(auto& v : u) {
		int amt = int(v.size());
		sort(rall(v));
		for(int i = 1; i < int(v.size()); i++) {
			v[i] += v[i-1];
		}
		for(int k = 1; k <= n; k++) {
			int c = (amt/k)*k;
			if (c == 0) {
				// cout << amt << endl;
				break;
			}
			// cout << c << endl;
			ans[k-1] += v[c-1];
		}
		// cout << amt << endl;
	}
	for(auto c : ans) cout << c << " ";
	cout << nl;

}	
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
