#include <bits/stdc++.h>
 
#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
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
const int N = 1e5+10;
vl res(N);
void solve() {
	int n; ll k; cin >> n >> k;
	string ans(n, 'a');
	int idx = lower_bound(all(res), k) - res.begin();
	int k1 = n - idx - 1;
	int k2 = k1 + 1 + (res[idx] - k);
	ans[k1] = 'b', ans[k2] = 'b';
	cout << ans << nl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll cnt = 0, k = 0;
    while (cnt < 3e9) cnt += k, res[k] = cnt, k++;
    TC
    	solve();
 
    return 0;
}