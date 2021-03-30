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
	int n, a, b, k; cin >> n >> a >> b >> k;
	vi c(n);
	for(auto& v : c) cin >> v;

	// sort(all(c));

	int com = a+b;
	
	vi amt;
	int cur = 0, ans = 0, j = 0;
	FOR(n, i) {
		int times = (c[i]-1)/com;
		c[i] -= com*times;

		// cout << atimes << " :: " << k << nl;
		// cout << c[i] << " " << times << nl;

		c[i] -= a;
		if (c[i] <= 0) {
			ans++;
			continue;
		}

		int atimes = ceil(c[i]/(a*1.0));
		c[i] -= b;

		if (c[i] <= 0) {
			amt.pb(atimes);
			continue;
		}
	}

	sort(all(amt));
	// cout << ans << nl;
	// for(auto v : amt) cout << v << " ";
	// cout << nl;

	while(j < sz(amt) && cur+amt[j] <= k) {
		cur += amt[j];
		j++;
		ans++;
	}

	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
