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

int pick(int b) {
	if (b == 1) return 2;
	if (b == 2) return 1;
	if (b == 3) return 2;
	return 0;
}


void solve() {
	int n; cin >> n;
	vt<vi> a(n, vi(n, 0));
	vt<pi> dia;

	for(int i = 0; i < n; i++) {
		dia.pb(pi(0, i));
	}
	for(int i = 1; i < n; i++) {
		dia.pb(pi(i, n-1));
	}


	int i = 0, j = 1; 
	pi c1 = dia[i], c2 = dia[j];
	int p = -1;
	while(true) {
		int b; cin >> b;
		p = pick(b);
		if (p == 1) {
			a[c1.first][c1.second] = 1;
			cout << p << " " << c1.first+1 << " " << c1.second+1 << endl;
			c1.first++, c1.second--;
			if (c1.first >= n || c1.second < 0) {
				i+=2;
				if (i >= sz(dia)) break;
				c1 = dia[i];
			}
		} else { 
			a[c2.first][c2.second] = 1;
			cout << p << " " << c2.first+1 << " " << c2.second+1 << endl;
			c2.first++, c2.second--;
			if (c2.first >= n || c2.second < 0) {
				j+=2;
				if (j >= sz(dia)) break;
				c2 = dia[j];
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (a[i][j] != 0) continue;
			int b; cin >> b;
			int v = 1;
			while(v == b ||  v == p) v++;
			cout << v << " " << i+1 << " " << j+1 << endl;
		}
	}
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}

/*

???
???
???

*/