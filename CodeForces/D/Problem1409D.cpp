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

int sum(ll x) {
	int ret = 0;
	while(x) {
		ret += (x%10);
		x /= 10;
	}
	return ret;
}
int d[19];
void solve() {
	ll n, s; cin >> n >> s;
	ll x = n;
	for(auto& c : d) c = 0;
	int nxt = 0;
	while(x) {
		d[nxt] = (x%10);
		x /= 10;
		nxt++;
	}

	if (sum(n) <= s) {
		cout << 0 << nl;
		return;
	}

	ll cur = 0, mul = 1;
	for(int i = 0; i < 19; i++, mul *= 10) {
		cur += (d[i]*mul);
		ll dif = (mul*10) - cur;
		if (sum(n+dif) <= s) {
			cout << dif << nl;
			return;
		}
	}
	cout << -1 << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
