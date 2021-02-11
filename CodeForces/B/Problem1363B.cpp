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
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

char flip(char c) {
	if (c == '1') c ='0';
	else c = '1';
	return c;
}

void solve() {
	string s;
	cin >> s;
	int suf0 = 0, suf1 = 0;
	for(auto &it:s)
	{
		suf0 += (it == '0');
		suf1 += (it == '1');
	}
	int ans = min(suf0, suf1); //Make whole string 0/1
	int pref0 = 0, pref1 = 0;
	for(auto &it:s)
	{
		pref0 += (it == '0'), suf0 -= (it == '0');
		pref1 += (it == '1'), suf1 -= (it == '1');
		//Cost of making string 0*1*
		ans = min(ans, pref1 + suf0);
		//Cost of making string 1*0*
		ans = min(ans, pref0 + suf1);
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
