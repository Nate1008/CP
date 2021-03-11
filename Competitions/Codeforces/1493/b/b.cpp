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

bool ok = false;
void solve() {
	int h, m; cin >> h >> m;
	char mid; int th, tm; cin >> th >> mid >> tm;
	ok = false;
	int flag = 0;
	while(!ok) {
		vi digits;
		int cp = th;
		while(cp > 0) {
			digits.pb((cp%10));
			cp /= 10;
		}
		if (th < 10) digits.pb(0);
		if (th == 0) digits.pb(0);

		cp = tm;
		while(cp > 0) {
			digits.pb((cp%10));
			cp /= 10;
		}
		if (tm < 10) digits.pb(0);
		if (tm == 0) digits.pb(0);
		flag = 0;
		for(auto d : digits) {
			if (d == 0) continue;
			else if (d == 1) continue;
			else if (d == 2) continue;
			else if (d == 5) continue;
			else if (d == 8) continue;
			else {flag = 1; break;}
		}
		// cout << sz(digits) << nl;
		int fh = 0, fm = 0;
		if (flag == 1) goto E;
		swap(digits[1], digits[0]);
		swap(digits[2], digits[3]);
		reverse(all(digits));
		for(int i = 0; i < 4; i++) {
			if (digits[i] == 2) digits[i] = 5;
			else if (digits[i] == 5) digits[i] = 2;
			// cout << digits[i] << " ";		
		}
		// cout << nl;
		fh = (digits[0]*10)+digits[1];
		fm = (digits[2]*10)+digits[3];

		if (fh >= h || fm >= m) goto E;
		else {ok = true; continue;}

		E: tm++;
		if (tm == m) th++;
		th %= h;
		tm %= m;
	}
	cout << (th < 10 ? ("0"+to_string(th)) : to_string(th)) << mid << (tm < 10 ? ("0"+to_string(tm)) : to_string(tm)) << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
