#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define mi map<int, int>
#define fi first
#define se second
#define vt vector
#define vi vector<int>
#define vl vector<long long>
#define st set

#define FOR(t, q) for(int q = 0; q < t; q++)
#define FORN(t, q, v) for(int q = v; q < t; q++)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

const int MAX = 1e5+100;
string ret(int v, int c) {
	char ch = v+'0';
	string s(c, ch); 

	if (v == 0) {
		s = '1'+s;
	}

	return s;
}



void solve() {
	vi a(10);
	for(auto& c : a) cin >> c;

	a.pb(a.front());
	a.erase(a.begin());

	for(int x = 1; x <= MAX; x++) {
		for(int i = 0; i < 10; i++) {
			if (a[i] < x) {
				int v = (i+1)%10;
				cout << ret(v, x) << nl;
				// cout << "DONE" << nl;
				return;
			}
		}
	}
	cout << -1 << nl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
