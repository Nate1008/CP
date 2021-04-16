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

const int MX = 5e4+10;
vector<int> smallest_factor;
vector<bool> prime;
vector<int> primes;
 
void sieve(int maximum) {
    maximum = max(maximum, 1);
    smallest_factor.assign(maximum + 1, 0);
    prime.assign(maximum + 1, true);
    prime[0] = prime[1] = false;
    primes = {};
 
    for (int p = 2; p <= maximum; p++)
        if (prime[p]) {
            smallest_factor[p] = p;
            primes.push_back(p);
 
            for (int64_t i = int64_t(p) * p; i <= maximum; i += p)
                if (prime[i]) {
                    prime[i] = false;
                    smallest_factor[i] = p;
                }
        }
}

void solve() {
	int a, b, c; cin >> a >> b >> c;
	int g = pow(10, c-1);
	int da = a-c, db = b-c; 
	ll amta = 1, amtb = 1;
	for(int i = 0; i < da; i++) amta *= 10;
	for(int i = 0; i < db; i++) amtb *= 10;

	if (amtb == min(amtb, amta)) amtb++;
	else amta++;

	cout << amta*g << " " << amtb*g << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(MX);
    TC
    	solve();

    return 0;
}









/*int g = 2, idx = 1;
	while(true) {
		int d = g, len = 0;
		while(d) {
			len++;
			d /= 10;
		}
		if (len == c) {
			break;
		}
		// cout << "G: " << g << nl;
		g *= primes[idx++];
	}
	int da = a-c, db = b-c; 
	ll amta = 1, amtb = 1;
	for(int i = 0; i < da; i++) amta *= 10;
	for(int i = 0; i < db; i++) amtb *= 10;
	amtb++;

	cout << amta*g << " " << amtb*g << nl;*/
