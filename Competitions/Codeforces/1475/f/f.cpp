#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
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

bool ok = false;

void solve() {
	int n; cin >> n;
	vt<string> A(n), B(n);
	FOR(n, i) cin >> A[i];
	FOR(n, i) cin >> B[i];
	FOR(n, i) {
		if (A[0][i] != B[0][i]) {
			FOR(n, j) {
				if (A[j][i] == '1') A[j][i] = '0';
				else A[j][i] = '1';
			}
		}
	}
	FOR(n, i) {
		if (A[i][0] != B[i][0]) {
			FOR(n, j) {
				if (A[i][j] == '1') A[i][j] = '0';
				else A[i][j] = '1';
			}
		}
	}
	ok = true;
	FOR(n, i) {
		if (A[i] != B[i]) {ok = false; break;}
	}
	cout << (ok ? "YES" : "NO") << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
