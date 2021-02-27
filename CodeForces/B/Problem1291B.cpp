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

bool ok1 = false, ok2 = false;
void solve() {
	int n; cin >> n;
	vi need(n), a(n);
	FOR(n, i) cin >> a[i];
	int k = n/2;
	int j = 0;
	while(j <= k) need[j] = j, j++;
	j = n-1;
	while(j > k) need[j] = (n-1)-j, j--;
	
	ok1 = 1, ok2 = 1;
	FOR(n, i) {
		ok1 &= a[i] >= need[i];
	}
	reverse(all(need));
	FOR(n, i) {
		ok2 &= a[i] >= need[i];
	}
	cout << (ok1 || ok2 ? "Yes" : "No") << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
