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

bool ok = false;
void solve() {
	ll n; cin >> n;
	if (n == 1) {
		cout << 1 << nl;
		return;
	}

	vl a; 
	while(n % 2 == 0) {
		n /= 2;
		a.pb(2);
	}

	for(ll i = 3; i <= sqrt(n); i+=2) {
		if (n % i == 0) {
			while(n % i == 0) {
				a.pb(i);
				n /= i;
			}
		}
	}
	if (n > 2) {
		a.pb(n);
	}

	int c = count(all(a), a[0]);

	if (c == sz(a)) {
		cout << a[0] << nl;
		return;
	}

	cout << 1 << nl;


}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
