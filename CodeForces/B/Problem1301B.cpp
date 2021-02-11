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
#define FORV(a, x) for (auto& a : x)
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
	int n, k, m = -1, c = 0, a = 1e9+1, b = -1; cin >> n;
	vi arr(n);
	FOR(n, i) cin >> arr[i];
	FOR(n, i) {
		if ((arr[i-1] == -1 || arr[i+1] == -1) && arr[i] != -1) a = min(arr[i], a), b = max(arr[i], b);
	}
	k = (a+b)/2;
	if (arr[0] == -1) arr[0] = k;
	FORN(n, i, 1) {
		if (arr[i] == -1) arr[i] = k;
		m = max(abs(arr[i-1]-arr[i]), m);
	}
	cout << m << " " << k << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC solve();

    return 0;
}
