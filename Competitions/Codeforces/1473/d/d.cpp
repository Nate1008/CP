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
	int n, m, x = 0, mxx = 0, mnx = 0; cin >> n >> m;
	string s; cin >> s;
	vi mx(n+1), mn(n+1), end(n+1);
	FOR(n, i) {
		x += (s[i] == '+' ? 1 : -1);
		mxx = max(mxx, x);
		mnx = min(mnx, x);
		mx[i+1] = mxx;
		mn[i+1] = mnx;
		end[i+1] = x;
	}
	mxx = mnx = x = 0;
	vi mxr(n+1), mnr(n+1), endr(n+1);
	for(int i = n-1; i >= 0; i--) {
		x += (s[i] == '-' ? 1 : -1);
		mxx = max(mxx, x);
		mnx = min(mnx, x);
		mxr[i] = mxx;
		mnr[i] = mnx;
		endr[i] = x;
	}

	FOR(m, i) {
		int l, r; cin >> l >> r;
		l--;
		int l1 = mx[l], l2 = mn[l];
		int r1 = end[l] + (mxr[r] - endr[r]), r2 = end[l] + (mnr[r] - endr[r]);
		cout << max(r1, l1) - min(l2, r2) + 1 << endl;
	}
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
