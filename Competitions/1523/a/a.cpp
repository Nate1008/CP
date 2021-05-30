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

bool done(string s, int n) {
	bool ok = true;
	for(int i = 0; i < n; i++) {
		if (s[i] == '0') {
			int cnt = 0;
			if (i != 0) cnt += s[i-1]-'0';
			if (i != n-1) cnt += s[i+1]-'0';
			ok &= cnt == 2;
		}
	}
	return ok;
}	

void solve() {
	int n, m; cin >> n >> m;
	string s; cin >> s;

	m = min(n, m);
	while(m) {
		string t = s;
		for(int i = 0; i < n; i++) {
			if (s[i] == '0') {
				int cnt = 0;
				if (i != 0) cnt += s[i-1]-'0';
				if (i != n-1) cnt += s[i+1]-'0';
				if (cnt == 1) {
					t[i] = '1';
				}
			}
		}	
		s = t;
		m--;
	}
	cout << s << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
