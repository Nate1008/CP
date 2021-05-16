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

const int N = 250010;
int M;
ll fact[N];
void solve() {
	ll ans = 0;
	int n; cin >> n >> M;
	for(int i = 1; i < N; i++) {
		fact[i] = (i*1LL%M)*(fact[i-1]%M)%M;
	}
	for(int siz = 1; siz <= n; siz++) {
		ll val = ((n-siz+1)*1LL*(n-siz+1)%M)*1LL*((fact[siz]%M)*1LL*(fact[n-siz]%M)%M);
		val %= M;
		ans += val;
		ans %= M;
	}
	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

	fact[0] = 1;
    solve();

    return 0;
}
