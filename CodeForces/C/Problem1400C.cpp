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

bool bounds(int n, int i) {
	return (i >= 0 && i < n);
}

bool pos = false;
void solve() {
	string s; cin >> s;
	int n = sz(s);
	string w(n, '1');
	int x; cin >> x;

	for(int i = 0; i < n; i++) {
		if (s[i] == '1') continue;

		int a = i+x, b = i-x;
		if (bounds(n, a)) w[a] = '0';
		if (bounds(n, b)) w[b] = '0';
	}


	string t(n, '?');
	for(int i = 0; i < n; i++) {
		int a = i+x, b = i-x;
		pos = false;
		if (bounds(n, a)) pos |= (w[a] == '1');
		if (bounds(n, b)) pos |= (w[b] == '1');
		t[i] = '0'+pos;
	}

	cout << (s == t ? w : "-1") << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
