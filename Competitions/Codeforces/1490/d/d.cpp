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

vi ans;
void change(int l, int r, vi a, int d) {
	if (r - l < 0) return;
	int mx = 0, idx = -1;
	for(int i = l; i <= r; i++) {
		if (a[i] > mx) {
			mx = a[i];
			idx = i;
		}
	}	
	ans[idx] = d;

	change(l, idx-1, a, d+1);
	change(idx+1, r, a, d+1);
	return;
}

void solve() {
	int n; cin >> n;
	vi a(n);
	FOR(n, i) cin >> a[i];
	ans = vi(n);
	change(0, n-1, a, 0);
	FOR(n, i) cout << ans[i] << " ";
	cout << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
