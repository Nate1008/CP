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
#define st set
#define si set<int>
#define sd set<double>
#define sf set<float>
#define sl set<long long>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define FORE(t, q) for(int q = 0; q <= t; q++)
#define RFORE(t, q) for(int q = t; q >= 0; q--)

#define FORN(t, q, v) for(int q = v; q < t; q++)
#define RFORN(t, q, v) for(int q = t; q > v; q--)
#define FOREN(t, q, v) for(int q = v; q <= t; q++)
#define RFOREN(t, q, v) for(int q = t; q >= v; q--)

#define FORV(v, type) for (vt<type>::iterator it = v.begin(); it <= v.end(); it++)
#define sz(v) (int)(v.size())


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
        vi c(n);
        FOR(n, i) cin >> c[i];

        int a = 0, b = 0, cnt = 0, pos = 0, prev = 0;
        for(int i = 0, j = n-1; i <= j;) {
            if (cnt % 2 == 0) {
                cnt++;
                prev = 0;
                while(prev <= pos && i <= j) prev += c[i++];
//                cout << "POS-A: " << prev << " " << i << endl;
                a += prev;
                pos = prev;
            } else {
                cnt++;
                prev = 0;
                while(prev <= pos && i <= j) prev += c[j--];
//                cout << "POS-B: " << prev << " " << j << endl;
                b += prev;
                pos = prev;
            }
        }
        cout << cnt << " " << a << " " << b << endl;
    };

    return 0;
}
