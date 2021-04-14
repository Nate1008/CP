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

bool ok = false;
void solve() {
	int n, m; cin >> n >> m;
	vi a(n), b(n);
	unordered_map<int, int> A, B;
	for(auto& c : a) { cin >> c; A[c]++; }
	for(auto& c : b) { cin >> c; B[c]++; }

	sort(all(a)), sort(all(b));
	

	
	int ans = 1e9+10;
	for(int i = 0; i < n; i++) {
		int dif = b.back()-a[i];
		if (dif < 0) {
			dif += m;
		}
		ok = true;
		for(int x = 0; x < n; x++) {
			int v = (a[x]+dif)%m;
			ok &= (A[a[x]] == B[v]);
		}
		if (ok) {
			ans = min(ans, dif);
		}
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
