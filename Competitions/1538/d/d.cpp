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

int prime(ll a) {
	int ret = 0;
	for(int i = 2; (i*1LL*i) <= a; i++) {
		while(a % i == 0) {
			a /= i;
			ret++;
		}
	}
	if (a > 1LL) ret++;

	return ret;
}

void solve() {
	ll a, b, k; cin >> a >> b >> k;
	ll g = gcd(a, b);
	ll A = a/g, B = b/g;
	ll pa = (prime(A)), pb = (prime(B));
	ll sa = min(1ll, pa), sb = min(1ll, pb);
	// PREGCD
	if (k >= (sa+sb) && k <= (pa+pb)) {
		cout << "YES" << endl;
		return;
	}
	if (k < (sa+sb) || g == 1) {
		cout << "NO" << endl;
		return;
	}

	// GCD
	ll pg = (prime(g));
	ll p = (pa+pb);
	if ((p % 2) != (k % 2) && p > (sa+sb)) p--;
	k -= p;
	assert(k > 0);
	if (k % 2 == 1) {
		cout << "NO" << endl;
		return;
	}
	if (k >= 2 && k <= (2*pg)) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

