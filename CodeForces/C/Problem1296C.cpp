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

const int INF = 1e9+100;

void solve() {	
	int n; cin >> n;
	string s; cin >> s;
	map<pi, int> vis;
	map<pi, int> avail;
	pi cur = pi(0, 0);
	int ans = INF, r = -1, l = -1;
	vis[cur] = 0;
	avail[cur] = 1;
	for(int i = 0; i < n; i++) {
		if (s[i] == 'L') cur.F++;
		else if (s[i] == 'R') cur.F--;
		else if (s[i] == 'U') cur.S++;
		else if (s[i] == 'D') cur.S--;


		// cout << l << " " << r << nl;
		if (avail[cur] == 1) {
			int len = i-vis[cur]+1;
			if (len < ans) {
				// cout << "DEGUG: " << nl;
				// cout << cur.F << " " << cur.S << nl;
				// cout << vis[cur] << nl;
				l = vis[cur]+1;
				r = i+1;
				ans = len;
			}
		}

		vis[cur] = i+1;
		avail[cur] = 1;	
	}

	if (ans == INF) cout << -1 << nl;
	else cout << l << " " << r << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
