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

bool start = false;
void solve() {
	int n, m; cin >> n >> m;
	int pr = -1, pc = -1; 
	int cr = 0, cc = 0, ct = 0;
	vt<vi> b(n, vi(m, 0));
	char c;
	FOR(n, i) {
		FOR(m, j) {
			cin >> c;
			if (c == '*') b[i][j] = 1;
			ct += b[i][j];
		}
	}
	FORN(n-1, i, 1) {
		FORN(m-1, j, 1) {
			if (b[i][j] && b[i+1][j] && b[i-1][j] && b[i][j+1] && b[i][j-1]) {
				pr = i;
				pc = j;
			}
		}
	}
	if (pc == -1 && pr == -1) {cout << "NO" << nl; return;}

	start = false;
	FOR(n, i) {
		// b[i][pc]
		if (!b[i][pc] && !start) continue;
		else start = true;
		if (start && b[i][pc]) cc++;
		else break; 
	}

	start = false;
	FOR(m, i) {
		// b[pr][i]
		if (!b[pr][i] && !start) continue;
		else start = true;
		if (start && b[pr][i]) cr++;
		else break; 
	}
	cout << ((cc+cr-1) == ct ? "YES" : "NO"); 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
