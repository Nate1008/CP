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
	int n, m; cin >> n >> m; 
	vi a(n), b(n), c(m);
	for(auto& v : a) cin >> v;
	for(auto& v : b) cin >> v;
	for(auto& v : c) cin >> v;
	

	map<int, vector<int>> cnt;
	for(int i = 0; i < n; i++) {
		if (b[i] == a[i]) { cnt[b[i]].pb(i) }
	}
	for(int i = 0; i < n; i++) {
		if (b[i] != a[i]) { cnt[b[i]].pb(i); }
	}	
	reverse(all(c));
	
	vi ans;
	int x = 0;	
	for(int i = 0; i < m; i++) {
		int v = c[i];
		if (i == 0 && cnt[v].empty()) {
			cout << "NO" << nl;
			return;
		}

		int idx = -1;
		if (cnt[v].empty()) {
			idx = x;
		} else {
			idx = cnt[v].back();
			if (b[idx] != a[idx]) cnt[v].pop_back();
		}

		if (i == 0) {
			x = idx;
		}

		ans.pb(idx);
	}

	reverse(all(ans));
	for(int i = 0; i < m; i++) {
		a[ans[i]] = c[m-1-i];
	}

	if (a != b) {
		cout << "NO" << nl;
		return;
	}

	cout << "YES" << nl;
	for(auto v : ans) cout << v+1 << " ";
	cout << nl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
