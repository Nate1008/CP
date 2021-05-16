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

const int N = 1e5+10;
int rc[N], cc[N];
void solve() {
	int n, q; cin >> n >> q;
	vi rp(n), cp(n);
	for(auto& v : rp) {
		cin >> v;
		v %= 2;
	}

	for(auto& v : cp) {
		cin >> v;
		v %= 2;
	}

	int cur = 0;
	for(int i = 0; i < n;) {
		int j = i;
		while(j < n && rp[j] == rp[i]) {
			rc[j] = cur;
			j++;
		}
		i = j;
		cur++;
	}


	cur = 0;
	for(int i = 0; i < n;) {
		int j = i;
		while(j < n && cp[j] == cp[i]) {
			cc[j] = cur;
			j++;
		}
		i = j;
		cur++;
	}

	for(int t = 0; t < q; t++) {
		int ra, ca, rb, cb; cin >> ra >> ca >> rb >> cb;
		ra--, ca--, rb--, cb--;
		int r = min(ra, rb), R = max(ra, rb);
		int c = min(ca, cb), C = max(ca, cb);
		bool ok = rc[r] == rc[R];
		ok &= cc[c] == cc[C];
		cout << (ok ? "YES" : "NO") << endl;
	}
}		

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    // TC
    	solve();

    return 0;
}
