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
const int N = 2e5+100;

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
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;
	sort(all(a));

	vt<vi> cnt(N);
	set<int> vis;
	for(auto c : a) {
		int x = c;
		for(int i = 2; i*i <= x; i++) {
			vis.insert(i);
			int amt = 0;
			while(x % i == 0) {
				x /= i;
				amt++;
			}
			cnt[i].pb(amt);
		}
		if (x > 1) {
			cnt[x].pb(1);
			vis.insert(x);
		}
	}

	ll ans = 1;
	for(auto v : vis) {
		int amt = 0;
		if (sz(cnt[v]) <= (n-2)) continue;
		sort(all(cnt[v]));

		if (sz(cnt[v]) == (n-1)) amt = cnt[v][0];
		else amt = cnt[v][1]; 

		ans *= fast_pow(v, amt);
	}
	cout << ans << nl;




	// int g = 0;
	// for(auto c : a) g = gcd(g, c);
	// cout << g << nl;

	// for(auto c : a) cout << c % 54 << " ";
	// cout << nl;

	// for(int i = 0; i < n; i++) {
	// 	for(int j = i+1; j < n; j++) {
	// 		cout << a[i]*a[j] << " ";
	// 	}
	// 	cout << nl;
	// }

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
