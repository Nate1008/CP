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
	int n, k; cin >> n >> k;
	vi a(n), ele;
	unordered_set<int> uni;
	for(auto& c : a) {
		cin >> c;
		uni.insert(c);
	}

	if (uni.size() > k) {
		cout << -1 << nl;
		return;
	}
	for(auto& c : uni) {
		ele.pb(c);
	}

	int nxt = 1;
	while(nxt <= n && sz(ele) < k) {
		if (uni.find(nxt) == uni.end()) ele.pb(nxt);
		nxt++;
	}


	vi ans;
	for(int i = 0, j = 0; i < n; j++, j %= sz(ele)) {
		if (ele[j] == a[i]) {
			ans.pb(a[i]);
			i++; 
		} else {
			ans.pb(ele[j]);
		}
	}
	cout << sz(ans) << nl;
	for(auto c : ans) cout << c << " ";
	cout << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
