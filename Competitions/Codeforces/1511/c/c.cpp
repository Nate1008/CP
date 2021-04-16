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
	vi p(51, -1);

	int n, q; cin >> n >> q;
	vi a(n);
	FOR(n, i) {
		cin >> a[i];
	}

	FOR(n, i) {
		if (p[a[i]] == -1) {
			p[a[i]] = i;
		}
	}

	FOR(q, i) {
		int x; cin >> x;
		cout << p[x]+1 << " ";
		for(int i = 0; i < 51; i++) {
			if (p[i] == -1 || i == x) continue;
			if (p[x] > p[i]) p[i]++;
		}
		p[x] = 0;
	}

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
