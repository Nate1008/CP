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
	int n, k, z; cin >> n >> k >> z; 
	vi a(n);
	for(auto& c : a) cin >> c;

	int ans = 0;
	for(int t = 0; t <= z; t++) {
		int len = k-(2*t)+1;
		int mx = 0, sum = 0;
		for(int i = 0; i <= len; i++) {
			if (i == n-1) continue;
			mx = max(mx, (a[i]+a[i+1]));
		}
		for(int i = 0; i < len; i++) {
			sum += a[i];
		}
		sum += (mx*t);
		ans = max(sum, ans);
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
