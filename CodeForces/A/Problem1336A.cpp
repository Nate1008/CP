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
 
const int N = 2e5+10;
vi adj[N];
int depth[N], children[N];
 
int dfs(int u, int v, int d) {
	depth[u] = d;
	for(auto& c : adj[u]) {
		if (c == v) continue;
		children[u] += dfs(c, u, d+1);
	}
	return children[u]+1;
}
void solve() {
	int n, k; cin >> n >> k;	
	for(int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int tot = dfs(1, 0, 0);
	assert(tot == n);

	vi vals;
	for(int i = 1; i <= n; i++) {
		vals.pb(depth[i]-children[i]);
	}
 
	sort(rall(vals));
	cout << accumulate(begin(vals), begin(vals)+k, 0LL) << endl;
 
}	
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();
 
    return 0;
}