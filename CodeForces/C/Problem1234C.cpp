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

void solve() {
	int n; cin >> n;
	vt<string> a(2);
	for(auto& c : a) cin >> c;

	for(auto& s : a) {
		for(auto& c : s) {
			if (c == '1' || c == '2') {
				c = '0';
			} else {
				c = '1';
			}
		}
	}

	pi cur = pi(0, 0);
	while(cur.se < n) {
		char ch = a[cur.fi][cur.se];
		if (ch == '0') {
			cur.se++;
		} else {
			char p = a[1-cur.fi][cur.se];
			if (ch == '1' && p == '1') {
				cur.se++;
				cur.fi = 1-cur.fi;
			} else {
				cout << "NO" << nl;
				return;
			}
		}
	}

	cout << ((cur.fi == 1 && cur.se >= n) ? "YES" : "NO") << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
