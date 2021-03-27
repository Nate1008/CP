#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<int, pi>
#define mi map<int, int>
#define ml map<long long, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vt<vi> a(n, vi(m)), b(n, vi(m));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}

	bool can = false, need = false;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if (a[i][j] > b[i][j]) swap(a[i][j], b[i][j]);

			int amx = 0, bmx = 0;
			if (j) {
				amx = max(amx, a[i][j-1]);
				bmx = max(bmx, b[i][j-1]);
			}

			if (i) {
				amx = max(amx, a[i-1][j]);
				bmx = max(bmx, b[i-1][j]);
			}

			can = (a[i][j] > amx) && (b[i][j] > bmx);
			// need = (a[i][j] <= amx) || (b[i][j] <= bmx);
			
		
			if (!can) {
				cout << "Impossible" << nl;
				return;
			}
		}
	} 
	cout << "Possible" << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
