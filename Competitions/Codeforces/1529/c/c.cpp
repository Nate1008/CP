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
const int N = 1e5+10;
vector<int> adj[N];
int val[N], l[N], r[N];
int ans = 0;


void dfs(int u = 0, int p = -1) {
	if (p != -1) {
		int rval = abs(val[p]-r[u]), lval = abs(val[p]-l[u]);
		if (rval > lval) val[u] = r[u], ans += rval;
		else val[u] = l[u], ans += lval;
	}

	for(auto v : adj[u]) {
		if (v != p) dfs(v, u);
	}
}


void solve() {
	int n; cin >> n;

	for(int i = 0; i < n+5; i++) adj[i] = {};

	for(int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
	}

	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int res = 0;
	ans = 0;
	val[0] = l[0];
	dfs();
	res = max(ans, res);

	ans = 0;
	val[0] = r[0];
	dfs();
	res = max(ans, res);

	cout << res << endl;
}	


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
