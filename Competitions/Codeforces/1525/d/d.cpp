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

const int N = 5005;
int cnt[N];

bool cmp(int i, int j) {
	return cnt[i] < cnt[j];
}

void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;

	vi one, zer;

	for(int i = 0; i < n; i++) {
		if (a[i]) {
			one.pb(i);
			if (i != 0) cnt[i] += a[i-1];
			if (i != n-1) cnt[i] += a[i+1];
		} else zer.pb(i);
	} 

	sort(all(one), cmp);

	int ans = 0;
	for(auto c : one) {
		int mn = INT_MAX, best = -1;
		for(int i = 0; i < sz(zer); i++) {
			int dst = abs(c-zer[i]);
			if (dst < mn) {
				mn = dst;
				best = i;
			}
		}
		ans += mn;
		zer.erase(begin(zer)+best);
	}
	cout << ans << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("../in.in", "r", stdin);
	#endif

    // TC
    	solve();

    return 0;
}
