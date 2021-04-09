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

int ask(int i, int j) {
	cout << "? " << i+1 << " " << j+1 << nl;
	int x; cin >> x;
	return x;
}

void solve() {
	int n; cin >> n;
	vi a(n), ans(n, 0);
	iota(all(a), 0);
	while(true) {
		int cnt = 0, j = -1;
		for(int i = 0; i < n; i++) {

			if (a[i] == -1) continue;

			if (j == -1) {
				j = i;
				continue;
			}

			int x = ask(i, j), y = ask(j, i);
			if (x > y) {
				ans[i] = x;
				a[i] = -1;
			} else {
				ans[j] = y;
				a[j] = -1;
			}
			cnt++;
			j = -1;
		}
		if (cnt <= 0) break;
	}

	// cout << "DONE" << nl;


	cout << "! ";
	for(auto c : ans) cout << (c == 0 ? n : c) << " ";
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
