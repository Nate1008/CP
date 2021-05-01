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
	vi p(n);
	vt<vi> b(n, vi(n, 0));
	for(auto& v : p) cin >> v;

	int px = 0, py = 0;
	for(auto c : p) {
		int x = px++, y = py++;
		for(int t = 0; t < c; t++) {
			b[y][x] = c;
			if (t == c-1) break;

			if (x > 0 && b[y][x-1] == 0) x--;
			else if (y < n-1 && b[y+1][x] == 0) y++;
			else {
				cout << -1 << nl;
				return;
			}
		}
	}

	for(int a = 1; a <= n; a++) {
		for(int i = 0; i < a; i++) {
			cout << b[a-1][i] << " ";
		}
		cout << nl;
	}


}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
