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

void print(vt<string> a, int b) {
	cout << b << nl;
	for(auto& c : a) {
		cout << c << nl;
	}
	return;
}
void solve() {
	int n, k; cin >> n >> k;
	vt<string> b(n, string(n, '0'));
	if (k == 0) {
		print(b, 0);
		return;
	}

	for(int i = 0; i < n; i++) {
		if (k == 0) {
			print(b, 2);
			return;
		}
		b[i][i] = '1';
		k--;
	}
	if (k == 0) {
		print(b, 0);
		return;
	}
	vt<vt<pi>> p(2);
	for(int x = 0; x < 2; ++x) {
		for(int i = 1; i < n; ++i) {
			p[x].pb(pi((x % 2 ? i : 0), (x % 2 ? 0 : i)));
		}
	}

	for(int i = 0; i+1 < n; ++i) {
		pi fr, ba;
		if (i % 2) {
			fr = p[0].front();
			p[0].erase(p[0].begin());
			ba = p[1].back();
			p[1].erase(prev(p[1].end()));
		} else {
			fr = p[1].front();
			p[1].erase(p[1].begin());
			ba = p[0].back();
			p[0].erase(prev(p[0].end()));
		}

		// cout << nl;
		// cout << fr.fi << " " << fr.se << nl;
		// cout << ba.fi << " " << ba.se << nl;

		while(fr.fi < n && fr.se < n) {
			if (k == 0) {
				print(b, 2);
				return;
			}
			b[fr.fi++][fr.se++] = '1';
			k--;
		}
		while(ba.fi < n && ba.se < n) {
			if (k == 0) {
				print(b, 2);
				return;
			}
			b[ba.fi++][ba.se++] = '1';
			k--;
		}
		if (k == 0) {
			print(b, 0);
			return;
		}
	}
	print(b, 0);
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
