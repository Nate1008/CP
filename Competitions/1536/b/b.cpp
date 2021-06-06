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

	int n; cin >> n;
	string s; cin >> s;
	vi idx[26];

	FOR(n, i) {
		idx[s[i]-'a'].push_back(i);
	}

	FOR(26, i) {
		if (idx[i].empty()) {
			cout << char('a'+i) << endl;
			return;
		}
	}

	bool found = false;
	FOR(26, i) FOR(26, j) {
		found = false;
		for(auto pos : idx[i]) {
			if (pos+1 < n && (s[pos+1]-'a') == j) {
				found = true;
				break;
			}
		}
		if (!found) {
			cout << char(i+'a') << char(j+'a') << endl;
			return;	
		}
	}

	FOR(26, i) FOR(26, j) FOR(26, k) {
		found = false;
		for(auto pos : idx[j]) {
			if (pos-1 >= 0 && pos+1 < n && 
				(s[pos-1]-'a' == i) && (s[pos+1]-'a' == k)) {
				found = true;
				break;
			}
		}
		if (!found) {
			cout << char(i+'a') << char(j+'a') << char(k+'a') << endl;
			return;
		}	
	}
	assert(false);
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
