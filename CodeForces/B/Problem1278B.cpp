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

const int MAX = 1e6+10;
void solve() {
	int a, b; cin >> a >> b;

	if (a > b) swap(a, b);

	if (a == b) {
		cout << 0 << nl;
		return;
	}
	

	int dif = b-a;
	int cur = 0, ans = -1;

	for(int i = 1; i <= MAX; i++) {
		cur += i;
		int pos = cur+dif;
		if (pos % 2 == 0 && pos/2 >= dif) {
			ans = i;
			break;
		}
	}

	cout << ans << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
