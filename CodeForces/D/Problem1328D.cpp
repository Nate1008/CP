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
	vi a(n), ans(n);
	for(auto& c : a) cin >> c;

	bool ok = count(all(a), a[0]) == n;
	if (ok) {
		cout << 1 << endl;
		for(int i = 0; i < n; i++) {
			cout << 1 << " ";
		}
		return;
	}

	ok = !(n % 2);
	ans[0] = 0;
	for(int i = 1; i < n; i++) {
		if (!ok && a[i] == a[i-1]) ans[i] = ans[i-1], ok = 1;
		else ans[i] = 1-ans[i-1];
	}

	if (!ok) {
		if (a[n-1] != a[n-2] && a[n-1] != a[0]) ans[n-1] = 2;
		else if (a[n-1] == a[n-2]) ans[n-1] = ans[n-2];
		else if (a[n-1] == a[0]) ans[n-1] = ans[0];
	}
	cout << *max_element(all(ans))+1 << nl;
	for(auto v : ans) cout << v+1 << " ";
	cout << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}

