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
const int INF = 1e9+5;
void solve() {
	int n; cin >> n;
	vi arr(n);
	vi cnt(n+1, 1);

	FOR(n, i) {
		cin >> arr[i];
	}

	n = unique(arr.begin(), arr.end()) - arr.begin();
	arr.resize(n);
	FOR(n, i) cnt[arr[i]]++;
	cnt[arr[0]]--;
	cnt[arr[n-1]]--;
	int best = INF;
 	for(auto i : arr) best = min(best, cnt[i]);
 	cout << best << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();
 
    return 0;
}