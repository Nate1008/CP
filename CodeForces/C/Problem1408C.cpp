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

void solve() {
	int n, l; cin >> n >> l;
	vi f(n);
	for(auto& c : f) cin >> c;

	double a = 0, b = l;
	int sa = 1, sb = 1;
	double tot = 0;
	for(int i = 0, j = n-1; i <= j; ) {
		double dsta = abs(f[i]-a), dstb = abs(f[j]-b);
		double ta = dsta/(sa*1.0), tb = dstb/(sb*1.0);
		double t = min(ta, tb);

		a += (t*sa), b -= (t*sb);
		tot += t;

		if (ta < tb) sa++, i++;
		else if (tb < ta) sb++, j--;
		else {
			sb++, j--;
			sa++, i++;
		}


	}

	double dstto = abs(a-b);
	double time = (dstto/(sa+sb*1.0));
	tot += time;
	printf("%f\n", tot);
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
