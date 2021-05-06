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

int ask(int l, int r) {
    cout << "? " << l << " " << r << endl;
    int z;
    cin >> z;
    return z;
}

void solve() {
	int n, t, k; cin >> n >> t >> k;

	int lo = 1, hi = n; 
	while(lo < hi) {
		int mid = (lo+hi)/2;
		int x = ask(lo, mid);
		int len = mid-lo+1;
		x = len-x;
		if (x >= k) {
			hi = mid;
		} else {
			lo = mid+1;
			k -= x;
		}
	}
	cout << "! " << lo << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
