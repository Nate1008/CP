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
	int n, m, x = 0; cin >> n >> m;
	string s; cin >> s;
	vpi cnt(n, pi(0, 0));
	FOR(n, i) {
		cnt[i] = cnt[i-1];
		if (s[i] == '-') cnt[i].S++;
		else cnt[i].F++;
	}
	FOR(m, i) {
		int l, r; cin >> l >> r;
		l--, r--;
		int d1 = cnt[r].F - cnt[l].F;
		int d2 = cnt[r].S - cnt[l].S;

	}
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
