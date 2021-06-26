#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define mi map<int, int>k
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
	vi a(n);
	F0R(i, n) cin >> a[i];

	ll ans = 0;
	for(int i = 0; i < n; i++) {
		int inv = ((i+1)%a[i]);

		cout << i << " : " << inv << endl;
		for(int j = i-inv; j >= 0; j -= inv) {
			cout << (a[i]*a[j]) << " " << (i+j+2) << endl;
			if ((a[i]*a[j]) == (i+j+2)) ans++;
		}
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

