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

bool cmp(pii &a, pii &b) {
	if (a.F == b.F && a.S.F == b.S.F) return a.S.S > b.S.S;
	else if (a.S.F == b.S.F) return a.F < b.F;
	else return a.S.F > b.S.F;
}

void solve() {
	int n, k; cin >> n >> k;
	vi A(1, 0), B(1, 0), C(1, 0);
	FOR(n, i) {
		int t, x, y; cin >> t >> x >> y;

		if (x && !y) {A.pb(t);}
		else if (!x && y) {B.pb(t);}
		else if (x && y){ C.pb(t);}
	}

	sort(all(A)), sort(all(B)), sort(all(C));
	FORN(sz(A), i, 1) A[i] += A[i-1];
	FORN(sz(B), i, 1) B[i] += B[i-1];
	FORN(sz(C), i, 1) C[i] += C[i-1];
	ll ans = 1e11;
	int d = min(k+1, sz(C)), sm = min(sz(A), sz(B));
	FOR(d, i) {
		ll cur = C[i];
		if ((k-i) > sm-1) continue;
		cur += A[(k-i)], cur += B[(k-i)];
		ans = min(cur, ans);
	}
	if (ans == 1e11) cout << -1;
	else cout << ans;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
