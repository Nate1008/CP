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

const int MAX = 1e7+100;
int d[MAX], ans[MAX];
ll s[MAX];

void solve() {
	int c; cin >> c;
	cout << ans[c] << nl;
}	


void compute() {
	fill(d, d+MAX, -1);
	for(int i = 2; i*i < MAX; i++) {
		if (d[i] == -1) {
			d[i] = i;
			for(int j = i; j < MAX; j += i) {
				if (d[j] == -1) d[j] = i;
			}
		}
	}

	s[1] = 1;
	for(int i = 2; i < MAX; i++) {
		if (d[i] == -1) {
			d[i] = i;
			s[i] = d[i]+1;
		} else {
			int j = i;
			s[i] = 1;
			while(j % d[i] == 0) {
				j /= d[i];
				s[i] = s[i] * d[i] + 1;
			}
			s[i] *= s[j];
		}
	}


	fill(ans, ans+MAX, -1);
	for(int i = MAX-1; i > 0; i--) {
		if (s[i] < MAX) {
			ans[s[i]] = i;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    compute();
    TC
    	solve();

    return 0;
}
