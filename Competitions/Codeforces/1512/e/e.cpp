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
	int t = r-l+1;
	vi ans;
	for(int i = n; i > 0; i--) {
		vi used(n, 0), pos;
		int amt = s, turns = t;
		while(amt > 0 && turns > 0) {
			int take = min(amt-(turns != 1), i);
			while(used[take] == 1) take--;

			if (take <= 0) break;

			amt -= take;
			pos.pb(take);
			used[take] = 1;
			turns--;
		}
		if (sz(pos) == t && accumulate(all(pos), 0) == s) {
			ans = pos;
			break;
		}
	}
	if (ans.empty()) {
		cout << -1 << nl;
		return;
	}

	vi ret(n, -1), used(n, 0);
	for(int i = l-1; i < r; i++) {
		ret[i] = ans.back();
		used[ans.back()] = 1;
		ans.pop_back();
	}

	int nxt = 1;
	for(int i = 0; i < n; i++) {
		if (ret[i] != -1) continue;
		while(used[nxt] == 1) nxt++;
		ret[i] = nxt;
		used[nxt] = 1;
	}

	for(auto c : ret) {
		cout << c << " ";
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
