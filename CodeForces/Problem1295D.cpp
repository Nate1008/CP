#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
#define mi map<int, int>
#define ml map<long long, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

vector<int> smallest_factor;
vector<bool> prime;
vector<int> primes;

void sieve(ll maximum) {
    maximum = max(maximum, 1LL);
    smallest_factor.assign(maximum + 1, 0);
    prime.assign(maximum + 1, true);
    prime[0] = prime[1] = false;
    primes = {};
 
    for (int p = 2; p <= maximum; p++)
        if (prime[p]) {
            smallest_factor[p] = p;
            primes.push_back(p);
 
            for (ll i = p * p * 1LL; i <= maximum; i += p)
                if (prime[i]) {
                    prime[i] = false;
                    smallest_factor[i] = p;
                }
        }
}

ll fast_pow(ll a, ll p) {
    ll res = 1;

    while (p) {
        if (p % 2 == 0) {
            a = (a * a) /*% mod*/;
            p /= 2;
        } else {
            res = (res * a) /*% mod*/;
            p--;
        }
    }
    return res;
}

void solve() {
	ll a, m; cin >> a >> m;
	ll ans = 1; int k = 0, c = 0;
	while(m > 1) {
		k = 0;
		while(m % primes[c]) m /= primes[c], k++;
		if (k) ans *= fast_pow(primes[c], k-1) * (primes[c]-1);
		c++;
	}
	cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve((long long)1e10+10);
    TC
    	solve();

    return 0;
}
