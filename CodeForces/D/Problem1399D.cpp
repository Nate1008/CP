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
	int n, la = 0, k = 1; cin >> n;
	string s; cin >> s;
	vi ans(n, 0);
	vpi sub;
	FOR(n-1, i) {
		if (s[i] == s[i+1]) {
			sub.pb(pi(la, i));
			la = i+1;
			k++;
		}
	}
	sub.pb(pi(la, n-1));
	int cnt = 1, c = 0;
	vi a, b;
	for(auto& [l, r] : sub) {
		if (s[l] == '0' && !b.empty()) {
			c = b[sz(b)-1];
			k--;
			b.pop_back();
		} else if (s[l] == '1' && !a.empty()) {
			c = a[sz(a)-1];
			k--;
			a.pop_back();
		} else {
			c = cnt;
			cnt++;
		}
		FORN(r+1, i, l) ans[i] = c;
		if (s[r] == '0') a.push_back(c);
		else b.push_back(c);
	}
	cout << k << endl;
	FOR(n, i) cout << ans[i] << " ";
	cout << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
