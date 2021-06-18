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

const int mod = 1e9+7;
const int nax = 4e5+10;
int r1[nax], r2[nax], i1[nax], i2[nax];
bool vis[nax];

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % mod;
            p /= 2;
        } else {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}

void dfs(int u) {
	vis[u] = 1;
	// cout << u << endl;
	int v = i1[r2[u]-1];
	if (!vis[v]) dfs(v);
}

void solve() {
	int n; cin >> n;
	int cnt = 0;
	
	FOR(n, i) {
		cin >> r1[i];
		i1[r1[i]-1] = i;
	}

	FOR(n, i) {
		cin >> r2[i];
		i2[r2[i]-1] = i;
	}
		
	fill(vis, vis+nax, 0);
	FOR(n, i) {
		if (vis[i]) continue;
		dfs(i);
		cnt++;
	}	
	cout << fast_pow(2, cnt) << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

