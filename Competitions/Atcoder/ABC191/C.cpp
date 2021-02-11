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
	int n, m, ans = 0; cin >> n >> m;
	vpi A(n, pi(m, 0));
	FOR(n, i) {
		string s; cin >> s;
		FOR(m, j) {
			if (s[j] == '#') {
				A[i] = pi(min(A[i].F, j), max(A[i].S, j));
			}
		}
	}
	bool ok1 = false, ok2 = false;
	FORN(n-2, i, 1) {
		if (A[i].F == A[i+1].F) ok1 = true;
		else ans += 1+ok1, ok1 = 0;
		
		if (A[i].S == A[i+1].S) ok2 = true;
		else ans += 1+ok2, ok2 = 0;
	}
	ans += ok1 + ok2;
	if (A[0].F != A[0].S) ans++;
	if (A[n-2].F != A[n-2].S) ans++;
	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
