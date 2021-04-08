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
#define fi first
#define se second
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


const int mod = 1e9+7;


void solve() {
	int n, x, pos; cin >> n >> x >> pos;
	vi avail(n);
	for(int i = 0; i < n; i++) {
		avail[i] = i+1;
	}

	int big = n-x, small = x-1;

	ll p = 1;
	int l = 0, r = n, mid;
	while(l < r) {
		mid = (l+r)/2;

		if (mid == pos) {
			l = mid+1;
		} else if (mid > pos) {
			p *= big--;
			p %= mod;
			avail.erase(prev(avail.end()));	
			r = mid;
		} else {
			p *= small--;
			p %= mod;
			avail.erase(avail.begin());
			l = mid+1;
		}
	}
	for(int i = sz(avail)-1; i; i--) {
		p *= i;
		p %= mod;
	}
	cout << (p % mod) << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
