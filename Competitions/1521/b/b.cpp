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

const int P = 1e9+7;
void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) cin >> c;


	cout << 2*(n/2) << endl;
	for(int i = 1; i < n; i += 2) {
		cout << i << " " << i+1 << " " << 
		min(a[i-1], a[i]) << " " << max(a[i-1], a[i]) << endl;
		cout << i << " " << i+1 << " " << min(a[i-1], a[i]) << " " << P << endl;
	}
}	


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
