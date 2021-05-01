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

vi a, b;
void solve() {
	int n; cin >> n;
	a = vi(n), b = vi(n);
	for(auto& c : a) cin >> c;
	for(auto& c : b) cin >> c;


	vi x = b;
	sort(rall(x));
	vi idx(n);
	iota(all(idx), 0);
	sort(all(idx), [](int i, int j) {
		if (a[i] == a[j]) return b[i] > b[j];
		return a[i] > a[j];
	});

	int opti = 0;
	while(opti < n && b[idx[opti]] == x[opti]) opti++;

	ll ans = 0;
	for(int i = 0; i < n; i++) { 
		ans += (a[i]*1LL*b[i]);
	}

	
	sort(all(idx), [](int i, int j) {
		if (b[i] == b[j]) return a[i] < a[j];
		return b[i] > a[j];
	});

	if (opti == n) {
		cout << ans << nl;
		return;
	}
	opti = idx[opti];

	vi v;
	ll sum = 0;	
	for(int i = 0; i < n; i++) {
		if (i == opti) continue;
		v = a;
		reverse(v.begin()+(min(i, opti)), v.begin()+(max(i, opti)+1));
		sum = 0;
		for(int j = 0; j < n; j++) {
			sum += (v[j]*1LL*b[j]);
		}
		ans = max(sum, ans);
	}
	// cout << opti << nl;
	cout << ans << nl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
