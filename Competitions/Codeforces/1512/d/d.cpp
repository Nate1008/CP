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

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

bool found = false;
void solve() {
	int m; cin >> m;
	int n = m+2;
	vl a(n);
	FOR(n, i) {
		cin >> a[i];
	}

	sort(all(a));
	ll summ = 0, sumn = 0;
	FOR(m, i) {
		summ += a[i];
	}
	FOR(n-1, i) {
		sumn += a[i];
	}

	// x >= the b^n+1 element before shuffled
	if (summ == a[m]) {
		FOR(m, i) {
			cout << a[i] << " ";
		}
		cout << nl;
		return;
	}
	// x < the b^n+1 element before shuffled
	vl ans;
	found = false;
	for(int i = 0; i < n-1; i++) {
		if (a.back()+a[i] != sumn || found) {
			ans.pb(a[i]);
			continue;
		}
		found = true;
	}

	if (sz(ans) == n-2 && found) {
		for(auto c : ans) {
			cout << c << " ";
		}
		cout << nl;
		return;
	}


	cout << -1 << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
