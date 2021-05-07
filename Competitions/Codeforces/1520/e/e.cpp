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
	string s; cin >> s;
	vi sheep;
	for(int i = 0; i < n; i++) {
		if (s[i] == '*') sheep.pb(i);
	}
 
	if (sheep.size() == 0) {
		cout << 0 << endl;
		return;
	}
 
 
	long long ans = 1e15+10;
	int mid = sheep.size()/2;
	// for(int place = 0; place < n; place++) {
	int place = sheep[mid];
	long long pos = 0;
	int cur = place;
	// cout << place << " " << mid << endl;
	for(int i = place; i >= 0; i--) {
		if (s[i] == '*') {
			pos += (cur - i);
			cur--;
		}
	}
	cur = place+1;
	for(int i = place+1; i < n; i++) {
		if (s[i] == '*') {
			pos += (i - cur);
			cur++;
		}
	}
	ans = min(ans, pos);	
	// }
 
	cout << ans << endl;
}	
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();
 
    return 0;
}