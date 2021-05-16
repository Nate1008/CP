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
int cnt[N];
vector<int> adj[N];
void solve() {
	int n; cin >> n;
	for(int x = 0; x < n-2; x++) {
		int a, b, c; cin >> a >> b >> c;
		cnt[a]++, cnt[b]++, cnt[c]++;
		vi v = {a, b, c};
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if (i == j) continue;
				adj[v[i]].pb(v[j]);
			}
		}
	}


	int cur = -1;
	for(int i = 1; i <= n; i++) {
		if (cnt[i] == 1) cur = i;
	}



	int x = adj[cur][0], y = adj[cur][1];
	cout << cur << " ";
	for(int t = 0; t < n-3; t++) {
		int a = 0;
		for(int i = 0; i < sz(adj[x]); i++) {
			for(int j = 0; j < sz(adj[y]); j++) {
				if (adj[x][i] == adj[y][j] && adj[x][i] != cur) {
					a = adj[x][i];
				}
			}
		}
		cnt[x] = 0, cnt[y] = 0;
		for(int i = 0; i < sz(adj[a]); i++) {
			cnt[adj[a][i]]++;
		}

		if (cnt[x] <= cnt[y]) {
			cur = x, x = a;
			swap(x, y);
		} else { 
			cur = y, y = a; 
		}

		cout << cur << " ";
	}
	cout << x << " " << y << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    // TC
    	solve();

    return 0;
}
