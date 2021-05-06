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
	vi a(n), b(n);
	for(auto& c : a) cin >> c;
	for(auto& c : b) cin >> c;

	long long sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (a[i]*1LL*b[i]);
	}
	
	long long best = sum;
	for(int cen = 0; cen < n; cen++) {
		long long opt = sum;
		for(int i = cen-1, j = cen+1; i >= 0 && j < n; i--, j++)  {
			opt -= a[i]*1LL*b[i] + a[j]*1LL*b[j];
			opt += a[j]*1LL*b[i] + a[i]*1LL*b[j];
			best = max(best, opt);
		}
	}

	for(int bew = 0; bew < n-1; bew++) {
		long long opt = sum;
		for(int i = bew, j = bew+1; i >= 0 && j < n; i--, j++) {
			opt -= a[i]*1LL*b[i] + a[j]*1LL*b[j];
			opt += a[j]*1LL*b[i] + a[i]*1LL*b[j];
			best = max(best, opt);
		}
	}
	cout << best << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
