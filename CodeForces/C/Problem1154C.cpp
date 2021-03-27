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

vi da = {0, 3, 6}, db = {1, 5}, dc = {2, 4}, d = {0, 1, 2, 0, 2, 1, 0};

void solve() {
	vi r(3); cin >> r[0] >> r[1] >> r[2];
	int mx = 0;
	for(int i = 0; i < 7; i++) {
		vi c = r;
		int amt = 7-i;
		bool less = false;
		for(int j = i; j < 7; j++) {
			if (c[d[j]] == 0) {
				// cout << i << " " << j << nl;
				amt = j-i;
				less = true;
				break;
			}
			--c[d[j]];
		}
		if (less) {
			mx = max(amt, mx);
			continue;
		}
		vt<pi> s(3);
		s[0] = pi((c[0]/3), da[c[0]%3]);
		s[1] = pi((c[1]/2), db[c[1]%2]);
		s[2] = pi((c[2]/2), dc[c[2]%2]);
		sort(all(s));
		pi f = s.front();
		// cout << i << " : " << amt << nl;
		amt += (f.first*7)+f.second;

		mx = max(mx, amt);
	}
	cout << mx << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
