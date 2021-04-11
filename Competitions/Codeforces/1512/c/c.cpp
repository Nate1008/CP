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

bool ok = false;
void solve() {
	int a, b; cin >> a >> b;
	string s; cin >> s;
	string t = s;
	int n = a+b;
	for(int i = 0; i < n; i++) {
		if (t[i] == '?') continue;

		t[n-1-i] = t[i];
	}
	ok = 1;
	for(int i = 0; i < n; i++) {
		if (s[i] == '?') continue;
		ok &= (t[i] == s[i]);
	}

	if (!ok) {
		cout << -1 << nl;
		return;
	}

	for(auto c : t) {
		if (c == '1') b--;
		else if (c == '0') a--;
	}

	for(int i = 0; i < n; i++) {
		if (t[i] != '?') continue;
		assert(t[n-1-i] == '?');
		if (a >= b) {
			t[i] = '0';
			t[n-1-i] = '0';
			a -= 1+(i != n-1-i);
		} else {
			t[i] = '1';
			t[n-1-i] = '1';
			b -= 1+(i != n-1-i);
		}
	}

	// cout << t << nl;
	s = t;
	reverse(all(t));
	// cout << "A: " << a << nl;
	// cout << "B: " << b << nl;

	if (a != 0 || b != 0 || s != t) {
		cout << -1 << nl;
		return;
	}

	cout << t << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
