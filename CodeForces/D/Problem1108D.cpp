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

int n; 
string s;
map<char, int> c;

void solve() {
	cin >> n >> s;

	c['R'] = 0;
	c['G'] = 1;
	c['B'] = 2;
	
	auto getOther = [](int i) -> char {
		vt<char> pos = {'R', 'G', 'B'};

		int dst = -1;
		if (i != 0) {
			dst = c[s[i-1]];
			pos[dst] = '.';
		}
		if (i != n-1) {
			dst = c[s[i+1]];
			pos[dst] = '.';
		}
		int ans = 0;
		while(pos[ans] == '.') ans++;
		return pos[ans];
	};
	int ans = 0;
	for(int i = 1; i < n; ++i) {
		if (s[i-1] == s[i]) {
			s[i] = getOther(i);
			ans++;
		}
	}
	cout << ans << nl;
	cout << s << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
