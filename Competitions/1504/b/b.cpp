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

bool pos = false, found = false;
void solve() {
	int n; cin >> n;
	string a, b; cin >> a >> b;
	vi use;
	int c0 = 0, c1 = 0;
	FOR(n, i) {
		if (a[i] == '0') c0++;
		else c1++;

		if (c1 == c0) use.pb(i);
	}

	pos = true;
	int cnt = 0;
	// for(auto c : use) {
	// 	cout << c << " ";
	// }
	// cout << nl;
	for(int i = n-1; i >= 0; i--) {
		int v = (((a[i]-'0')+cnt)%2);
		// cout << i << " " << v << " " << cnt << nl;
		if (v == (b[i]-'0')) continue;

		found = false;
		while(!use.empty() && i < use.back()) {
			use.pop_back();
		}

		found = (!use.empty() && use.back() == i);
		if (found) {
			// cout << i << " " << use.back() << nl;
			use.pop_back();
		}
		// } else cout << i << nl;
		cnt++;

		pos &= found;
		if (!pos) {
			cout << "NO" << nl;
			return;
		}
	}

	cout << "YES" << nl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
