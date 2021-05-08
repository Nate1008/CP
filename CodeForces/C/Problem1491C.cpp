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
	long long ans = 0;
	vi a(n), c(n, 0);
	for(auto& s : a) cin >> s;

	for(int i = 0; i < n; i++) {
		ans += max(0, (a[i]-1)-c[i]);
		c[i] += max(0, (a[i]-1)-c[i]);
		if (i+2 < n) {
			for(int x = i+2; x < min(n, i+a[i]+1); x++) c[x]++;
		}
		if (i+1 < n) c[i+1] += c[i]-a[i]+1;
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
