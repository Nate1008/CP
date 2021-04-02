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


// L => 0
// U => 1
// R => 2
// D => 3

bool pos = false;
void solve() {
	int n; cin >> n;
	vi d(4);
	pos = false;
	FOR(4, i) cin >> d[i];
	// cout << (1 << 3) << nl;
	for(int x = 0; x <= ((1 << 4)-1); x++) {
		vi c = d;
		// cout << x << nl;
		for(int b = 0; b <= 3; b++) {
			int u = b, v = (b+1)%4;
			if (x & (1 << b)) {
				// cout << u << " " << v << nl;
				c[u]--, c[v]--;
			}
		}
		// cout << nl;	
		int flag = 1;
		FOR(4, i) {
			flag &= (c[i] >= 0 && c[i] <= n-2);
			// cout << c[i] << " ";
		}
		// cout << nl;
		pos |= flag;
	}
	cout << (pos ? "YES" : "NO") << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
