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
#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);


#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n, k; cin >> n;
	n *= 2, k = (n/2)-1;
	vi a(n); vpi ans;
	mi cp;
	FOR(n, i) {cin >> a[i]; cp[a[i]]++;}
	sort(all(a));
	cp[a[n-1]]--;
	int skip = -1;
	FOR(n, i) {
		ans.clear();
		mi cnt = cp;
		cnt[a[i]]--;
		int cur = n-2, m = a[n-1];
		while(sz(ans) < k) {
			while(!cnt[a[cur]]) cur--;
			int x = a[cur], y = m-x;
			// cout <<"X: " << x << "::" << cnt[x] << endl;
			cnt[x]--;
			// cout <<"Y: " << y << "::" << cnt[y] << endl;
			if (cnt[y]) cnt[y]--;
			else break;
			ans.pb(pi(x, y));
			m = x;
			cur--;
		}
		cnt[a[i]]++;
		if (sz(ans) >= k) {skip = i; break;}
	}
	if (skip == -1) goto L;

	cout << "YES" << endl;
	cout << a[skip]+a[n-1] << endl;
	cout << a[n-1] << " " << a[skip] << endl;
	for(auto p : ans) cout << p.F << " " << p.S << endl;
	return;
	L: cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
