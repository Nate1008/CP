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
	int n; cin >> n;
	int c0 = 0, c1 = 0, c2 = 0;
	vi a(n);
	FOR(n, i) {
		cin >> a[i];
		if (a[i] % 3 == 0) c0++;
		else if (a[i] % 3 == 1) c1++;
		else c2++;
	}
	int x = n/3, ans = 0;
	
	if (c0 - x > 0) c1 += (c0 - x), ans += (c0 - x), c0 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	if (c1 - x > 0) c2 += (c1 - x), ans += (c1 - x), c1 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	if (c2 - x > 0) c0 += (c2 - x), ans += (c2 - x), c2 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	if (c0 - x > 0) c1 += (c0 - x), ans += (c0 - x), c0 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	if (c1 - x > 0) c2 += (c1 - x), ans += (c1 - x), c1 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	if (c2 - x > 0) c0 += (c2 - x), ans += (c2 - x), c2 = x;
	// cout << "C0: " << c0 << " " << "C1: " << c1 << " " << "C2: " << c2 << nl;
	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
