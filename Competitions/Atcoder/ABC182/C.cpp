#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<int, pi>
#define mi map<int, int>
#define ml map<long long, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	ll n; cin >> n;
	vi d;
	ll c = n;
	int sum = 0, ans = 19;
	while(c) {
		int dig = c % 10;
		d.pb(dig);
		sum += dig;
		c /= 10;
	}
	for(int i = 1; i < sz(d); i++) d[i] += d[i-1];
	d.insert(d.begin(), 0);
	for(int r = 1; r < sz(d); r++) {
		for(int l = 0; l < r; l++) {
			int s = d[r]-d[l];
			if (sum != s && (sum-s) % 3 == 0) {
				int len = r - l;
				ans = min(ans, len);
			}
		}
	}
	if (sum % 3 == 0) ans = 0;
	cout << (ans == 19 ? -1 : ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
