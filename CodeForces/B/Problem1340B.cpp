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

vt<string> digits = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"}; 

void solve() {
	int n, k; cin >> n >> k;
	vt<string> s(n);
	vt<vi> dist(n+1, vi(10));
	FOR(n, i) {
		cin >> s[i];
		for(int d = 0; d < 10; d++) {
			for(int j = 0; j < 7; j++) {
				char x = s[i][j];
				char y = digits[d][j];
				if (x == '1' && y == '0') {
					dist[i][d] = -1;
					break;
				}
				if (x == '0' && y == '1') {
					++dist[i][d];
				}
			}
		}
	}
	vt<vi> dp(n+1, vi(k+1));
	dp[n][0] = 1;
	for(int i = n; i > 0; i--) {
		for(int j = 0; j <= k; j++) {
			if (dp[i][j]) {
				for(int d = 0; d < 10; d++) {
					if (dist[i - 1][d] != -1 && j + dist[i-1][d] <= k) {
						dp[i-1][j+dist[i-1][d]] = 1;
					}
				}
			}
		}
	}
	if (dp[0][k] == 0) {
		cout << -1 << nl;
		return;
	}

	for(int i = 0; i < n; i++) {
		int now = -1;
		for(int d = 9; d >= 0; d--) {
			if (dist[i][d] != -1 && k >= dist[i][d] && dp[i+1][k-dist[i][d]]) {
				now = d;
				k -= dist[i][d];
				break;
			}
		}
		assert(now != -1);
		cout << now;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
