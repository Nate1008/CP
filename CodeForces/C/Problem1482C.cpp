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
// const int N = 1e5+10;
bool ok = false;

void solve() {
	int n, m; cin >> n >> m;
	int lim = (m+1)/2;

	vi ans(m), a(n, 0);
	vpi c(m);
	vt<vi> b(m);

	FOR(m, i) {
		int k; cin >> k;
		c[i] = pi(k, i);
		FOR(k, j) {
			int x; cin >> x;
			x--;
			b[i].pb(x);
		}
	}
	sort(all(c));

	priority_queue<pi> pq;
	for(auto [k, i] : c) {
		pq = priority_queue<pi>();
		for(auto x : b[i]) {
			pq.push(pi(-a[x], x));
		}
		pi pick = pq.top();
		pq.pop();
		a[pick.second]++;
		ans[i] = pick.second;
		if (a[pick.second] > lim) {
			cout << "NO" << nl;
			return;
		}
	}
	cout << "YES" << nl;
	for(auto x : ans) cout << x+1 << " ";
	cout << nl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
