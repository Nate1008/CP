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

const ll INF = 1e18+100;
void solve() {
	int n; cin >> n;
	vl a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	ll ans = INF, sum = 0;
	vl rm(2, n), mn(2, INF);
	for(int i = 0; i < n; i++) {
		mn[i % 2] = min(mn[i % 2], a[i]);
		rm[i % 2]--;
		sum += a[i];
		if (i > 0) {
			ll cur = sum + (rm[0] * mn[0]) + (rm[1] * mn[1]);
			ans = min(ans, cur);
		}
	}
	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
