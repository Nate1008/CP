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

const pi origin = pi(0, 0);

pi operator-(pi a, pi b) {
	return pi((a.F-b.F), (a.S-b.S));
}

void solve() {
	string s; cin >> s;
	map<pi, pi> dif;
	int n = s.size();
	set<pi> pos;
	pi cur = origin;
	for(int i = 0; i < n; i++) {
		if (s[i] == 'U') cur.S++;
		else if (s[i] == 'D') cur.S--;
		else if (s[i] == 'L') cur.F--;
		else if (s[i] == 'R') cur.F++;

		pos.insert(cur);
	}

	for(auto obs : pos) {
		cur = origin;
		for(int i = 0; i < n; i++) {
			pi npos = cur;
			if (s[i] == 'U') npos.S++;
			else if (s[i] == 'D') npos.S--;
			else if (s[i] == 'L') npos.F--;
			else if (s[i] == 'R') npos.F++;

			if (npos != obs) cur = npos;
		}

		if (cur == origin) {
			cout << obs.F << " " << obs.S << nl;
			return;
		}
	}
	cout << 0 << " " << 0 << nl;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
