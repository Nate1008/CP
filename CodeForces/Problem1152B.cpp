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



ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) /*% mod*/;
            p /= 2;
        } else {
            res = (res * a) /*% mod*/;
            p--;
        }
    }
    return res;
}

void solve() {
	int x; cin >> x;
	vi ans;
	bool done = false;
	while(true) {
		string s = "";
		int u = x;
		while(u > 0) {
			s += '0'+u%2;
			u /= 2;
		}
		reverse(all(s));
		done = true;
		int idx = -1;
		cout << s << nl;
		for(int i = 0; i < sz(s); i++) {
			if (s[i] == '0') {
				done = false;
				idx = i;
				break;
			}
		}
		if (done) break;
		idx = sz(s)-idx;
		cout << idx << nl;
		assert(idx != -1);
		int v = fast_pow(2, idx)-1;
		ans.pb(idx);
		cout << v << nl;
		x = (x^v);
		x++;
		cout << x << nl;
	// 	break;
	}	
	cout << sz(ans)*2 << nl;
	for(auto c : ans) cout << c << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
