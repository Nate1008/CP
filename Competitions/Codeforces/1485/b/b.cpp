#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<int, pi>
#define mi map<int, int>
#define ml map<long long, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n, q, k; cin >> n >> q >> k;
	vi a(n);
	FOR(n, i) cin >> a[i];

  vl c(n, 0);
  FORN(n-1, i, 1) c[i] = a[i+1] - a[i-1] - 2LL;

  vl cs(n+1, 0);
  FOR(n, i) cs[i+1] = cs[i]+c[i]; 

	FOR(q, i) {
      int l, r; cin >> l >> r;
      l--;
      if (r - l == 1) {
          cout << k-1 << nl;
          continue;
      }
      ll ans = cs[r-1] - cs[l+1];
      ans += max(a[l+1]-2, 0);
      ans += max(k-1-a[r-2], 0);
      cout << ans << nl;
  }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
