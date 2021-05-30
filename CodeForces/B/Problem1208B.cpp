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
	int n; cin >> n;
	vi a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
 		
	mi freq; 
	
	int ans = 1e9+10;
 	for(int l = 0; l <= n; l++) {
 		bool valid = true;
 		for(int i = 0; i < l; i++) {
 			freq[a[i]]++;
 			if (freq[a[i]] == 2) {
 				valid = false;
 				break;
 			}
 		}
 		int r = n;
 		for(int i = n-1; i >= l; i--) {
 			freq[a[i]]++;
 			if (freq[a[i]] == 1) r = i;
 			else break;
 		}
 		if (valid) ans = min(ans, r-l);
 		freq.clear();
 	}
 	cout << ans << endl;
}	
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	
 
    // TC
    	solve();
 
    return 0;
}