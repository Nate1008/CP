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

char ch[2] = {'0', '1'};
void solve() {
	string s; cin >> s;
	int n = int(size(s));
	vi seg;
	int q = 0;
	ll ans = 0;
	for(int i = 0; i < n; ) {
		ans -= (q*1LL*(q+1))/2;
		int start = i-q;
		int j = i;
		q = 0;
		while(j < n && s[j] == '?') q++, j++;


		int cur = s[j]-'0';
		while(j+1 < n && (s[j+1] == ch[1-cur] || s[j+1] == '?')) {
			j++;
			if (s[j] == '?') q++;
			else q = 0;
			cur = 1-cur;
		}
		int len = min(j, n-1)-(max(0, start))+1;
		ans += (len*1LL*(len+1))/2LL;

		i = j+1;
	}

	cout << ans << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    TC
    	solve();

    return 0;
}
