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
	FOR(n, i) cin >> a[i];
	sort(all(a));

	if (n == 2) {
		cout << a[0] << " " << a[1] << endl;
		return;
	}

	int j = -1, cur = 1e9+10;
	for(int i = 0; i < n-1; i++) {
		if (abs(a[i]-a[i+1]) < cur) {
			j = i;
			cur = abs(a[i]-a[i+1]);
		}
	}
	assert(j != -1);

	for(int i = j+1; i < n; i++) {
		cout << a[i] << " ";
	}

	for(int i = 0; i <= j; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}

