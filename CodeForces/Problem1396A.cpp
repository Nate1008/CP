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

void solve() {
	int n; cin >> n;
	vl a(n);
	for(auto& c : a) cin >> c;
	if (n == 1) {
		cout << 1 << " " << 1 << nl << 0 << nl;
		cout << 1 << " " << 1 << nl << 0 << nl;
		cout << 1 << " " << 1 << nl << -a[0] << nl;
		return;
	}

	cout << 1 << " " << 1 << nl;
	cout << -a[0] << nl;
	cout << 1 << " " << n << nl;
	for(int i = 0; i < n; i++) {
		if (i == 0) cout << 0 << " ";
		else cout << (-n)*(a[i]) << " ";
	}
	cout << nl;
	cout << 2 << " " << n << nl;
	for(int i = 1; i < n; i++) {
		cout << (n-1)*(a[i]) << " ";
	}

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
