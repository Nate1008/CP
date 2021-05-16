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
#define ppb(s) pop_back(s);


#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	string s; cin >> s;
	int n = sz(s);
	stack<int> e, o;
	for(int i = n-1; i >= 0; i--) {
		int v = s[i]-'0';
		if (v % 2) o.push(v);
		else e.push(v);
	}

	while(!e.empty() && !o.empty()) {
		int a = e.top(), b = o.top();
		if (a < b) e.pop();
		else o.pop();
		cout << min(a, b);
	}

	while(!e.empty()) {
		cout << e.top();
		e.pop();
	}

	while(!o.empty()) {
		cout << o.top();
		o.pop();
	}
	cout << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    #ifdef LOCAL
		freopen("in.in", "r", stdin);
	#endif

    TC
    	solve();

    return 0;
}