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

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

int ans = 0;

int h, w;
void dfs(int i, int bits, int a, int b) {
	if (i == (h*w)) {
		ans++;
		return;
	} 

	if (bits & (1 << i)) {
		dfs(i+1, bits, a, b);
	}
	if (b) {
		dfs(i+1, bits | (1 << i), a, b-1);
	}
	if (a) {
		if (i % w != (w-1) && bits ^ (1 << (i+1))) {
			dfs(i+1, bits | (1 << i) | (1 << (i+1)), a-1, b);
		}
		if (i+w < (h*w) && bits ^ (1 << (i+w))) {
			dfs(i+1, bits | (1 << i) | (1 << (i+w)), a-1, b);
		}
	}
	return;
}



void solve() {
	int a, b; cin >> h >> w >> a >> b;
	ans = 0;
	dfs(0, 0, a, b);
	cout << ans << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
