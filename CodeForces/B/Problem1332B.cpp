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

vi p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;

	vi ans(n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 11; j++) {
			if (a[i] % p[j] == 0) {
				ans[i] = j+1;
				break;
			}
		}
	}
	vi dif = ans;
	sort(all(dif));
	auto it = unique(all(dif));
	dif.resize(distance(dif.begin(), it));
	mi map;
	for(int i = 0; i < dif.size(); i++) {
		map[dif[i]] = i+1;
	}
	for(auto& c : ans) {
		c = map[c];
	}
	
	cout << *max_element(all(ans)) << nl;
	for(auto& v : ans) {
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
