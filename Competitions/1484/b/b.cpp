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

bool ok = true;
void solve() {
	int n; cin >> n;
	int c = 0, m = 0;
	vi a(n);
	FOR(n, i) cin >> a[i];
	if (n <= 2) {cout << 0 << nl; return;}
	for(int i = 1; i < n; i++) {
		if (a[i-1] <= a[i]) {
			c = a[i]-a[i-1];
			break;
		}
	}

	for(int i = 1; i < n; i++) {
		if (a[i-1] > a[i]) {
			m = (a[i-1]+c)-a[i];
			break;
		}
	}

	for(int i = 1; i < n; i++) {
		if (a[i-1] <= a[i]) {
			int d = a[i]-a[i-1];
			if (c != d) {
				cout << -1 << nl;
				return;
			}
		} else {
			int mod = (a[i-1]+c)-a[i];
			int mn = a[i]+1;
			if (m != mod || c < mn) {
				cout << -1 << nl;
				return;
			}
		}
	}


	if (c == 0 || m == 0) {
		cout << 0 << nl;
	} else {
		cout << m << " " << c << nl;
	}

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
