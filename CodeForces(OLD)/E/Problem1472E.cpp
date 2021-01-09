#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
#define mi map<int, int>
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
#define FORV(a, x) for (auto& a : x)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);


#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n; cin >> n;
	vpii r(n);
	vi w(n, 1e9), p(n, -1);
	vi ans(n, -1);
	FOR(n, i) {
		cin >> r[i].F.F >> r[i].F.S;
		if (r[i].F.F > r[i].F.S) swap(r[i].F.F, r[i].F.S);
		r[i].S = i;
	}
	sort(all(r));
	int pt = -1, mn = r[0].F.S, idx = r[0].S; w[0] = mn, p[0] = idx;
	for(int i = 1; i < n; i++) {
		if (r[i].F.F != r[i-1].F.F) {
			pt = i - 1;
		}
		if (pt >= 0) {
			if (w[pt] < r[i].F.S) {
				ans[r[i].S] = p[pt]+1;
			}
		}
		if (r[i].F.S < mn) {
			mn = r[i].F.S;
			idx = r[i].S;
		}
		w[i] = mn;
		p[i] = idx;
	}
	FOR(n, i) cout << ans[i] << " ";
	cout << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
