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
	map<int, array<int, 3>> info;

	ll ans = 0;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		array<int, 3> v = info[x];
		int val = v[0], cnt = v[1], pos = v[2];
		if (val == 0) val++;
		val += cnt*(i-pos);
		if (cnt != 0) ans += (n*cnt)-val+1;
		pos = i;
		cnt++;
		// cout << x << " " << val << " " << cnt << " " << pos << endl;
		info[x] = array<int, 3>{val, cnt, pos};
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
