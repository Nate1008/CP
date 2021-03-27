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

int cnt[200005];

void solve() {
	int n; cin >> n;
	int mxi = -1, mx = 0;
	vi a(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		cnt[a[i]]++;
		if (cnt[a[i]] > mx) {
			mxi = a[i];
			mx = cnt[a[i]];
		}
	}
	cout << n-cnt[mxi] << nl;
	int k = find(all(a), mxi)-a.begin();
	for(int i = k-1; i >= 0; i--) {
		if (a[i] == mxi) continue;
		int type = (a[i] < mxi ? 1 : 2);
		cout << type << " " << i+1 << " " << i+2 << nl;
	}

	for(int i = k+1; i < n; i++) {
		if (a[i] == mxi) continue;
		int type = (a[i] < mxi ? 1 : 2);
		cout << type << " " << i+1 << " " << i << nl;
	}

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
