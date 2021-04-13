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

char ch[] = {'S', 'E', 'T'};

char other(char a, char b) {
	int i = 0;
	while(ch[i] == a || ch[i] == b) i++;
	return ch[i];
}

void solve() {
	int n, k; cin >> n >> k;
	string t, s;
	st<string> a;

	int ans = 0;

	for(int i = 0; i < n; i++) {
		cin >> t;
		for(auto x : a) {
			s = "";
			for(int i = 0; i < k; i++) {
				if (t[i] == x[i]) {
					s += t[i];
				} else {
					s += other(t[i], x[i]);
				}
			}
			ans += a.count(s);
		}
		a.insert(t);
	}


	assert(ans % 2 == 0);
	cout << (ans/2) << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
