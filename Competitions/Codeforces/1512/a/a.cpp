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
	int n; cin >> n;
	vi last(101, -1), cnt(101, 0);
	FOR(n, i) {
		int x; cin >> x;
		last[x] = i;
		cnt[x]++;
	}

	int ans = -1;
	for(int i = 0; i < 101; i++) {
		if (cnt[i] == 1) {
			ans = last[i];
			break;
		}
	}
	cout << ans+1 << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
