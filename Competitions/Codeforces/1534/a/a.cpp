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
	int n, m; cin >> n >> m;
	vt<vi> a(n, vi(m));

	FOR(n, i) {
		FOR(m, j) {
			char c; cin >> c;
			a[i][j] = (c == 'R' ? 1 : (c == 'W' ? 0 : 2));
		}
	}

	vt<vi> b(n, vi(m));
	vt<vi> c(n, vi(m));
	FOR(n, i) {
		int bi = i%2;
		int ci = (i+1)%2;
		FOR(m, j) {
			b[i][j] = bi;
			c[i][j] = ci;
			bi = 1-bi;
			ci = 1-ci;
		}
	}

	bool ok1 = true, ok2 = true;
	FOR(n, i) {
		FOR(m, j) { 
			if (a[i][j] == 2) continue;
			else ok1 &= a[i][j] == b[i][j];
		}
	}

	FOR(n, i) {
		FOR(m, j) { 
			if (a[i][j] == 2) continue;
			else ok2 &= a[i][j] == c[i][j];
		}
	}


	if (ok1) {
		cout << "YES" << endl;
		FOR(n, i) {
			FOR(m, j) {
				cout << (b[i][j] == 1 ? 'R' : 'W');
			}
			cout << endl;
		}
	} else if (ok2) {
		cout << "YES" << endl;
		FOR(n, i) {
			FOR(m, j) {
				cout << (c[i][j] == 1 ? 'R' : 'W');
			}
			cout << endl;
		}
	} else cout << "NO" << endl;


}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

