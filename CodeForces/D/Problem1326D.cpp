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
	string s; cin >> s;
	int n = sz(s);

	int i = 0, j = n-1;
	while(i < j && s[i] == s[j]) i++, j--;

	// cout << i << " " << j << nl;


	string ret = s.substr(0, i) + s.substr(j+1);
	int ans = sz(ret);

	string v, u;
	int a = i;
	while(a <= j) {
		v += s[a];
		u = v;
		reverse(all(u));
		int len = (2*i)+sz(v);
		if (u == v && len > ans) {
			ret = s.substr(0, i) + u + s.substr(j+1);
			ans = len;
			// cout << ret << nl;
		}
		a++;
	}

	int b = j;
	v = u = "";
	while(i <= b) {
		v += s[b];
		u = v;
		reverse(all(u));
		int len = (2*i)+sz(v);
		if (u == v && len > ans) {
			ret = s.substr(0, i) + u + s.substr(j+1);
			ans = len;
			// cout << ret << nl;
		}
		b--;
	}

	if (ans == 0) {
		cout << s.front() << nl;
		return;
	}

	cout << ret << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
