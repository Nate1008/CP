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

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	auto it = unique(all(s));
	s.resize(distance(s.begin(), it));
	n = s.size();
	vi seen(26, 0);
	bool ok = true;
	for(int i = 0; i < n; i++) {
		int v = s[i]-'A';
		if (seen[v]) {
			ok = false;
		}
		seen[v] = 1;
	}
	cout << (ok ? "YES" : "NO") << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
