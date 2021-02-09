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

int const INF = 1e9+10;
void solve() {
	int n, k; cin >> n >> k;
	vi a(n), cnt(2 * k + 1), pref(2 * k + 1);

	for(auto &A : a) cin >> A;
	FOR(n/2, i) {
		++cnt[a[i]+a[n-i-1]];
	}
	FOR(n/2, i) {
		int l1 = 1 + a[i], r1 = k + a[i];
		int l2 = 1 + a[n-i-1], r2 = k + a[n-i-1];
		++pref[min(l2, l1)];
		--pref[max(r1, r2)+1];
	}

	FORN(2*k+1, i, 1) {
		pref[i] += pref[i-1];
	}
	int ans = INF;
	for(int x = 2; x <= 2 * k; x++) {
		int cur = (pref[x] - cnt[x]) + ((n/2 - pref[x]) * 2);
		ans = min(ans, cur);
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
