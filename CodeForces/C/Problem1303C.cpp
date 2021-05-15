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

	vector<bool> used(26);
	used[s[0]-'a'] = 1;
	string t(1, s[0]);

	int pos = 0;
	for (int i = 1; i < sz(s); i++) {
		if (used[s[i]-'a']) {
			if (pos > 0 && t[pos-1] == s[i]) pos--;
			else if (pos + 1 < sz(t) && t[pos+1] == s[i]) pos++;
			else {
				cout << "NO" << endl;
				return;
			}
		} else {
			if (pos == 0) {
				t = s[i] + t;
			} else if (pos == sz(t)-1) {
				t += s[i];
				pos++;
			} else {
				cout << "NO" << endl;
				return;
			}
		}
		used[s[i]-'a'] = 1;
	} 

	for(int i = 0; i < 26; i++) {
		if (!used[i]) {
			t += char(i+'a');
		}
	}	
	cout << "YES" << endl << t << endl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
