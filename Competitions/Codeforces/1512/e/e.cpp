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

void solve() {
	int n, l, r, s; cin >> n >> l >> r >> s;
	int k = r-l+1;
	int sk = (k*(k+1))/2, skx = (k*(2*n-k+1))/2;
	if (s < sk || s > skx) {
		cout << -1 << nl;
		return;
	}
	vi ans(k, 0);
	iota(rall(ans), 1);
	int sum = sk, MX = n+1;
	for(auto& c : ans) {
		while((c+1) < MX && sum != s) {
			c++;
			sum++;
		}
		MX = c;
		if (sum == s) {
			break;
		}
	}

	vi p(n, 0), used(n+1, 0);
	for(int i = l-1; i < r; i++) {
		p[i] = ans.back();
		used[ans.back()]++;
		ans.pop_back();
	}
	int nxt = 1;
	for(int i = 0; i < n; i++) {
		if (p[i] != 0) continue;
		while(used[nxt] == 1) nxt++;
		used[nxt]++;
		p[i] = nxt;
	}
	for(auto& v : p) {
		cout << v << " ";
	}
	cout << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
