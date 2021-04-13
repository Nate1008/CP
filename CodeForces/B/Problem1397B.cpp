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

const ll MAX = 1e12+7;
const ll INF = 1e18+7;
void solve() {
 	int n; cin >> n;
 	vl a(n);
 	for(auto& c : a) cin >> c;


 	sort(all(a));

 	int c = 1;
 	ll ans = INF;
 	while(MAX > pow(c, n-1)) {
 		ll cost = 0;
 		for(int i = 0; i < n; i++) {
 			cost += abs(a[i]-(pow(c, i)));
 		}
 		ans = min(cost, ans);
 		c++;
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
