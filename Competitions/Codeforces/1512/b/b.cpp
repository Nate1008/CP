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

const int INF = 1e6+100;
void solve() {
	int n; cin >> n;
	int mnx = INF, mxx = -1, mny = INF, mxy = -1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char c; cin >> c;
			if (c == '*') {
				mnx = min(mnx, i), mxx = max(mxx, i);
				mny = min(mny, j), mxy = max(mxy, j);
			}
		}
	}

	if (mnx == mxx) {
		mnx = 0;
		if (mnx == mxx) {
			mxx = n-1;
		}
	}
	if (mny == mxy) {
		mny = 0;
		if (mny == mxy) {
			mxy = n-1;
		}
	}

	// cout << "X: " << mnx << " " << mxx << nl;
	// cout << "Y: " << mny << " " << mxy << nl; 

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (i == mnx || i == mxx) {
				if (j == mny || j == mxy) {
					cout << '*';
				} else {
					cout << '.';
				}
			} else {
				cout << '.';
			}
		}
		cout << nl;
	}


}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
