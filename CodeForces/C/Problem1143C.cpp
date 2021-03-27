#include <bits/stdc++.h>

#define ll long long
// #define pi pair<int, int>
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

const int N = 1e5+100;
int c[N];
vt<vi> adj(N);
vi ans;

int dfs(int u) {

	int res = 0;
	for(auto v : adj[u]) {
		dfs(v);
		res += c[v];
	}
	if (res == sz(adj[u]) && c[u]) {
		ans.pb(u);
		// cout << u << ": " << 1 << nl;
		return 1;
	}
	// cout << u << ": " << 0 << nl;
	return 0;
}

void solve() {
	int n; cin >> n;
	int root = -1;
	for(int i = 0; i < n; i++) {
		int p; cin >> p >> c[i];
		if (p == -1) root = i;
		else {
			p--;
			adj[p].pb(i);
		}
	}
	dfs(root);
	if (sz(ans) == 0) {
		cout << -1 << nl;
		return;
	}
	sort(all(ans));
	for(auto a : ans) {
		cout << a+1 << " ";
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
