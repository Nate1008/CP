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

unordered_map<long long, int> good;
void compute() {
	long long sum = 0;
	for(int i = 1; sum < 1e9+10; i+=2) {
		sum += i;
		good[sum*4LL] = 1;
	}
	long long sq;
	for(int i = 1; i*1LL*i <= 1e9+10; i++) {
		sq = i*1LL*i*2;
		good[sq] = 1;
	}
}

void solve() {
	long long n; cin >> n;

	cout << (good[n] == 1 ? "YES" : "NO") << endl;
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    compute();
    TC
    	solve();

    return 0;
}
