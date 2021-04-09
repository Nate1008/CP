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
#define fi first
#define se second
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
	vi a(n);
	for(auto& c : a) cin >> c;

	sort(all(a));


	int x = 0;
	while((n-x) > x) x++;
	x--;
	vi l, r;
	for(int i = n-1; i >= 0; i--) {
		if (i < x) {
			l.pb(a[i]);
		} else {
			r.pb(a[i]);
		}
	}


	// cout << x << nl;
	// for(auto c : l) cout << c << " ";
	// cout << nl;
	// for(auto c : r) cout << c << " ";
	// cout << nl;


	vi ans;
	while(!l.empty() || !r.empty()) {
		if (!l.empty()) {
			while(!r.empty() && l.back() >= r.back()) {
				ans.insert(ans.begin(), r.back());
				r.pop_back();
			}
		}
		if (!r.empty()) {
			ans.pb(r.back());
			r.pop_back();
		}
		if (!l.empty()) {
			ans.pb(l.back());
			l.pop_back();
		}
	}

	int c = 0;
	for(int i = 1; i < n-1; i++) {
		c +=  (ans[i] < ans[i-1] && ans[i] < ans[i+1]);
	}
	cout << c << nl;
	FOR(n, i) cout << ans[i] << " ";
	cout << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
