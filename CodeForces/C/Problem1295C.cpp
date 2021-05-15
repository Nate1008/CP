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
const int INF = 1e9+10;

int nxt[N][26];
void solve() {
	string s, t; cin >> s >> t;

	for(int i = 0; i < sz(s)+10; i++) {
		for(int j = 0; j < 26; j++) {
			nxt[i][j] = INF;
		}
	}

	for(int i = sz(s)-1; i >= 0; i--) {
		for(int j = 0; j < 26; j++) {
			nxt[i][j] = nxt[i+1][j];
		}
		nxt[i][s[i]-'a'] = i;
	}	

	int pos = 0;
	int ans = 1;
	for(int i = 0; i < sz(t); i++) {
		if (nxt[pos][t[i]-'a'] == INF) {
			pos = 0;
			ans++;
			if (nxt[pos][t[i]-'a'] == INF) {
				cout << -1 << endl;
				return;
			}
		} 

		pos = nxt[pos][t[i]-'a']+1;
	}
	
	cout << ans << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    TC
    	solve();

    return 0;
}
