#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
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
	int n, m; cin >> n >> m;
	string s; cin >> s;
	vi sur(1, 0), sul(1, 0);
	for(int i = n-1; i >= 0; i--) {
		int d = s[i] == '+' ? 1 : -1;
		sul.pb(min(0, sul.back()+d));
		sur.pb(max(0, sur.back()+d));
	}
	reverse(all(sul)), reverse(all(sur));
	vi prl(1, 0), prr(1, 0), pr(1, 0);
	FOR(n, i) {
		int d = s[i] == '+' ? 1 : -1;
		pr.pb(pr.back() + d);
		prl.pb(min(prl.back(), pr.back()));
		prr.pb(max(prr.back(), pr.back()));
	}

	FOR(m, i) {
		int l, r; cin >> l >> r;
		l--;
		int l1 = prl[l], r1 = prr[l];
		int l2 = sul[r] + pr[l], r2 = sur[r] + pr[l];
		cout << max(r1, r2) - min(l1, l2) + 1 << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
