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

vi g, r;
bool cmp(int a, int b) {
	if (g[a] == g[b]) return r[a] < r[b];
	return g[a] < g[b];
}

void solve() {
	int n; cin >> n; 
	vi a(n), b, ans(n);
	g = vi(n, 0), r = vi(n, 0);

	FOR(n, i) {
		int x; cin >> x;
		if (x == 0) continue;
		x--;
		g[i] = 1;
		r[x] = 1;
		ans[i] = x;
	}

	int v = count(all(g), 0);

	iota(all(a), 0);

	sort(all(a), cmp);

	a.resize(v);

	FOR(n, i) {
		if (r[i] == 0) {
			b.pb(i);
		}
	}

	for(auto c : a) {
		if (c == b.back()) {
			swap(b.back(), b.front());
		}
		ans[c] = b.back();
		b.pop_back();
	}

	for(auto c : ans) cout << c+1 << " ";

	
}	

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // TC
    	solve();

    return 0;
}
