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

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void fix(vi& a) {
	int n = sz(a);
	int f = 0, e = n-1;
	while(a[f] == f+1) f++;
	while(a[e] == e+1) e--;
	mi idx;
	for(int i = 0; i < n; i++) {
		idx[a[i]] = i;
	}

	for(int i = f; i <= e; i++) {
		a[i] = i+1;
	}

	int mn = n-1, mx = 0;
	for(int i = f; i <= e; i++) {
		mx = max(i, mx), mn = min(i, mn);
	}

	if (mn == n-1 && mx == 0) {

}

void solve() {
	int n; cin >> n;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}

// 3 2 5 4 1 6 7
// 1 2 


