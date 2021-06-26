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

#define F0R(q, t) for(int q = 0; q < t; q++)
#define FOR(q, v, t) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb(s) push_back(s);


#define nl endl
#define TC int _t; cin >> _t; F0R(_q, _t)

using namespace std;

void solve() {
	int n; cin >> n;
	vl d(n);
	F0R(i, n) cin >> d[i];
	sort(all(d));
	ll ans = 0;
	F0R(i, n-1) ans += (d[i+1]-d[i]);

	vl v(n);
	v[0] = 0;
	FOR(i, 1, n) {
		v[i] = (v[i-1]+(i*1LL*(d[i]-d[i-1])));
	}



	partial_sum(all(v), begin(v));


	cout << -v.back()+ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

