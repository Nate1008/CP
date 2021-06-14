#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define mi map<int, int>
#define fi first
#define se second
#define vt vector
#define vi vector<int>
#define vl vector<long long>
#define st set

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb(s) push_back(s);
#define ppb(s) pop_back(s);


#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n; cin >> n;
	vi a(n+2);
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = a[n+1] = 0;
	ll ans = 0;
	for(int i = 1; i <= n+1; i++) {
		ans += abs(a[i-1]-a[i]);
	}

	for(int i = 1; i <= n; i++) {
		int best = max(a[i-1], a[i+1]);
		if (a[i] > best) {
			ans -= (a[i]-best);
		}
	}
	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

