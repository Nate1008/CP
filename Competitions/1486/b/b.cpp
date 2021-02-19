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

const int INF = 1e9+10;


bool line = false;
void solve() {
	int n; cin >> n;
	int mxx = 0, mnx = INF, mxy = 0, mny = INF;
	line = false;
	vpi c(n);
	FOR(n, i) {
		cin >> c[i].F >> c[i].S;
		mxx = max(c[i].F, mxx), mnx = min(c[i].F, mnx);
		mxy = max(c[i].S, mxy), mny = min(c[i].S, mny);
	}

	if (n == 2) {
		line = (mxx != mnx && mxy == mny) || (mxx == mnx && mxy != mny);
		if (line) {
			ll ans = 1;
			ans += mxx - mnx;
			ans += mxy - mxy;
			cout << ans << nl;
			return;
		}
	}

	float averx = (mxx+mnx) / 2.0;
	float avery = (mxy+mny) / 2.0;
	int lx = floor(averx), rx = ceil(averx);
	int ly = floor(avery), ry = ceil(avery);

	vl sums;

	for(int x = lx; x <= rx; x++) {
		for(int y = ly; y <= ry; y++) {
			ll sum = 0;
			for(int i = 0; i < n; i++) {
				int px = c[i].F, py = c[i].S;

				sum += abs(px - x) + abs(py - y);
			}
			sums.pb(sum);
		}
	}
	sort(all(sums));
	int cnt = count(all(sums), sums[0]);
	cout << cnt << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
