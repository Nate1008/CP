#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
#define mi map<int, int>
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

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define FORE(t, q) for(int q = 0; q <= t; q++)
#define RFORE(t, q) for(int q = t; q >= 0; q--)

#define FORN(t, q, v) for(int q = v; q < t; q++)
#define RFORN(t, q, v) for(int q = t; q > v; q--)
#define FOREN(t, q, v) for(int q = v; q <= t; q++)
#define RFOREN(t, q, v) for(int q = t; q >= v; q--)

#define FORV(v, type) for (vt<type>::iterator it = v.begin(); it <= v.end(); it++)
#define si(v) (int)(v.size())


#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()

#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC {
    	int n; cin >> n;
    	string s; cin >> s;

    	string start = s.substr(0, 4);
    	string end = s.substr(n-4, n-1);
    	// cout << start << endl;
    	// cout << end << endl;
    	if (start == "2020" || end == "2020") {
    		cout << "YES" << endl;
    	} else if (start.substr(0, 2) == "20" && end.substr(2, 3) == "20") {
    		cout << "YES" << endl;
    	} else if (start.substr(0, 1) == "2" && end.substr(1, 3) == "020") {
    		cout << "YES" << endl;
    	} else if (start.substr(0, 3) == "202" && end.substr(3, 3) == "0") {
    		cout << "YES" << endl;
    	} else {
    		cout << "NO" << endl;
    	}

    }

    return 0;
}
