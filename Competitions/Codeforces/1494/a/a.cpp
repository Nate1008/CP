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
	string s; cin >> s;
	int n = sz(s);
	int bal = 0, flag = 0;
	vi val(3, 0);
	for(int a = 0; a < 2; a++) {
		for(int b = 0; b < 2; b++) {
			for(int c = 0; c < 2; c++) {
				if (a == 0) val[0] = 1;
				else val[0] = -1;

				if (b == 0) val[1] = 1;
				else val[1] = -1;

				if (c == 0) val[2] = 1;
				else val[2] = -1;

				bal = 0, flag = 0;
				for(int i = 0; i < n; i++) {
					bal += val[s[i]-'A'];
					// cout << bal << nl;
					if (bal < 0) {
						flag = 1;
						break;
					}
				}
				if (!flag && bal == 0) goto D;
			}
		}
	}
	cout << "NO" << nl;
	return;
	D: cout << "YES" << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
