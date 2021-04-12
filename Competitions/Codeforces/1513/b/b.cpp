

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
 
const int mod = 1e9+7;
bool any = false;
 
void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;
 
	sort(all(a));
	
	any = false;
	for(auto c : a) {
		any |= ((c&a[0]) != a[0]);
	}
 
	int cnt = count(all(a), a[0]);
	if (any || cnt < 2) {
		cout << 0 << nl;
		return;
	}
 
	ll ans = (cnt*1LL)*((cnt-1LL)*1LL);
 
	for(ll i = n-2; i > 1; i--) {
		ans *= (i*1LL);
		ans %= mod;
	}
	cout << ans%mod << nl;
 
 
 
 
}	
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();
 
    return 0;
}
