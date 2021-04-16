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

int cost(string s) {
	int ret = 0;
	for(int i = 0; i < sz(s)-1; i++) {
		for(int j = 0; j < sz(s)-1; j++) {
			if (i == j)  continue;
			ret += (s[i] == s[j] && s[i+1] == s[j+1]);
		}
	}
	return ret;
}

void solve() {
	int n, k; cin >> n >> k;
	string t = "", s(n, '?');
	for(int i = 0; i < k; i++) {
		for(int j = i; j < k; j++) {
			t += ('a'+j);
			if (j != k-1) t += ('a'+i);
		}
	}
	int mod = sz(t);
	for(int i = 0; i < n; i++) {
		int j = (i%mod);
		s[i] = t[j];
	}
	cout << s << nl;
	// cout << cost(s) << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
