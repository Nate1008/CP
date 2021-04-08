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
#define fi first
#define se second
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

int n, m; 
string s[101];
void bounds(int x, int y, int& dx, int& dy) {
	int nx = x+dx;
	if (nx >= n) dx = -1;

	int ny = y+dy;
	if (ny >= m) dy = -1;
}


string point(int x, int y) {
	s[x][y] = ('0'+(1-(s[x][y]-'0')));
	return (to_string(x+1)+" "+to_string(y+1));
}

void print() {
	FOR(n, i) {
		FOR(m, j) {
			cout << s[i][j] << " ";
		}
		cout << nl;
	}
	cout << nl;
}

void solve() {
	cin >> n >> m;
	FOR(n, i) {
		cin >> s[i];
	}

	int cnt = 0;
	FOR(n, i) FOR(m, j) cnt += (s[i][j]-'0');

	cout << cnt*3 << nl;


	FOR(n, i) {
		FOR(m, j) {
			if (s[i][j] == '0') continue;
			int dx = 1, dy = 1;
			bounds(i, j, dx, dy);
			cout << point(i, j) << " " << point(i, j+dy) << " " << point(i+dx, j) << nl;
			// cout << nl;
			// print();
			cout << point(i, j) << " " << point(i+dx, j+dy) << " " << point(i+dx, j) << nl;
			// cout << nl;
			// print();
			cout << point(i, j) << " " << point(i, j+dy) << " " << point(i+dx, j+dy) << nl;
			// cout << nl;
			// print();
			// s[i][j] = '0';
		}
	}

	// cout << nl;

	
	cout << nl;


}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
