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
const int MAX = 2001*100;
int pos[MAX];

void solve() {
	int n; cin >> n;
	vi a(n);
	for(auto& c : a) {
		cin >> c;
	}
	pos[0] = 1;
	for(auto& c : a) {
		for(int i = MAX-c-1; i >= 0; i--) {
			pos[i+c] |= pos[i];
		}
	}
	int sum = 0;
	for(auto c : a) sum += c;
	

	if (sum % 2 || pos[sum/2] == 0) {
		cout << 0 << nl;
		return;
	}

	int idx = 0, mn = 32;
	FOR(n, i) {
		for(int b = 0; b < 21; b++) {
			if (a[i] & (1 << b)) {
				if (mn > b) {
					idx = i;
					mn = b;
					break;
				}
			}
		}
	}

	cout << 1 << nl;
	cout << idx+1 << nl;

}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    fill(pos, pos+MAX, 0);
    // TC
    	solve();

    return 0;
}
