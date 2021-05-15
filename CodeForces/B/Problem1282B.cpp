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

void solve() {
	int n, p, k; cin >> n >> p >> k;
	vi a(n);
	for(auto& c : a) cin >> c;
	sort(all(a));
	
	vi pfx = {0};
	for(int i = 0; i < k-1.; i++) {
		pfx.push_back(pfx.back()+a[i]);
	}

	int ans = 0, sum = 0, pos = 0;
	for(int t = 0; t < k; t++) {
		sum = 0, pos = t;
		while(pos > 0 && pfx[pos] > p) pos--;
		ans = max(pos, ans);
		for(int i = t+k-1; i < n; i += k) {
			sum += a[i];
			if (sum > p) break;
			int dif = p-sum;
			while(pos > 0 && pfx[pos] > dif) pos--;
			ans = max(ans, pos+i-t+1);
		}
	}
	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    TC
    	solve();

    return 0;
}
