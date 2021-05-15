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
	string s, c; cin >> s >> c;
	vector<char> bst(sz(s), s.back());
	for(int i = sz(s)-2; i >= 0; i--) {
		bst[i] = bst[i+1];
		if(s[i] < bst[i]) {
			bst[i] = s[i];
		}
	}
	int idx = -1;
	for(int i = 0; i < sz(s); i++) {
		if (bst[i] != s[i]) {
			idx = i;
			break;
		}
	}

	int fnd = int(rend(s)-find(rbegin(s), rend(s), bst[idx]))-1;
	swap(s[idx], s[fnd]);

	if (s < c) cout << s << endl;
	else cout << "---" << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
