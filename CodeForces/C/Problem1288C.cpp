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

const int mod = 1e9+7;

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % mod;
            p /= 2;
        } else {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}


ll fact(int n) {
  ll res = 1;
  for (int i = 1; i <= n; i++) {
    res %= mod;
    res = res * 1LL * i % mod;
  }
  return res % mod;
}


ll C(int n, int k) {
  return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

void solve() {
	int n, m; cin >> n >> m;
	cout << C(n+(2*m)-1, (2*m)) % mod << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    // TC
    	solve();

    return 0;
}
