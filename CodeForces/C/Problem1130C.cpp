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


const int INF = 1e8+10;
vi dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};

int n;
bool inbounds(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= n) return false;
	return true;
}

void solve() {
	cin >> n;
	vt<string> b(n);
	vt<vi> vis(n, vi(n));
	vpi walkS, walkF;
	pi s, f; cin >> s.F >> s.S >> f.F >> f.S;
	s.F--, s.S--, f.F--, f.S--;

	for(auto& x : b) cin >> x;


	queue<pair<int, int>> q;
	q.push(s);
	//START
	while(!q.empty()) {
		pi cur = q.front();
		q.pop();
		if (vis[cur.F][cur.S] == 1) continue;

		walkS.pb(cur);
		vis[cur.F][cur.S] = 1;

		for(int i = 0; i < 4; i++) {
			int nx = cur.F+dx[i], ny = cur.S+dy[i];
			if (inbounds(nx, ny) && b[nx][ny] == '0') {
				q.push(pi(nx, ny));
			}
		}
	}

	q = queue<pair<int, int>>();
	q.push(f);
	//FINISH
	while(!q.empty()) {
		pi cur = q.front();
		q.pop();
		if (vis[cur.F][cur.S] == 2) continue;

		walkF.pb(cur);
		vis[cur.F][cur.S] = 2;

		for(int i = 0; i < 4; i++) {
			int nx = cur.F+dx[i], ny = cur.S+dy[i];
			if (inbounds(nx, ny) && b[nx][ny] == '0') {
				q.push(pi(nx, ny));
			}
		}
	}
	int ans = INF;
	for(auto a : walkS) {
		for(auto b : walkF) {
			int dstx = abs(a.F-b.F), dsty = abs(a.S-b.S);
			int dst = (dstx*dstx)+(dsty*dsty);
			ans = min(ans, dst);
		}
	}
	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
