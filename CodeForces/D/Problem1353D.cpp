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
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;
	
struct cmp {
	bool operator() (const pi &a, const pi &b) const {
		int lena = a.S - a.F + 1;
		int lenb = b.S - b.F + 1;
		if (lena == lenb) return a.F < b.F;
		else return lena > lenb;
	}
};


void solve() {
	int n; cin >> n;
	set<pair<int, int>, cmp> segs;
	segs.insert({0, n-1});
	vi A(n);
	FOR(n, i) {
		pi cur = *segs.begin();
		segs.erase(segs.begin());
		int mid = (cur.F+cur.S) / 2;
		A[mid] = i+1;
		if (mid > cur.F) segs.insert({cur.F, mid-1});
		if (mid < cur.S) segs.insert({mid+1, cur.S});
	}
	FOR(n, i) cout << A[i] << " ";
	cout << nl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
