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
	vi ans(n), a(n);
	unordered_set<int> in;
	for(auto& c : a) {
		cin >> c;
		in.insert(c);
	}

	vi can;
	for(int i = 0; i <= n+1; i++) {
		if (in.find(i) == in.end()) {
			can.pb(i);
		}
	}
	int nxt = 0;
	for(int i = 0; i < n; i++) {
		if (i > 0 && a[i] != a[i-1]) {
			ans[i] = a[i-1];
		} else {
			ans[i] = can[nxt++];
		}
	}
	for(auto& c : ans) {
		cout << c << " ";
	}
	cout << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
