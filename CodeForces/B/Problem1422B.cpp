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

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC {
        int n, m; cin >> n >> m;
        vt<vi> b(n, vi (m, 0));
        ll ans = 0;
        FOR(n, i) FOR(m, j) cin >> b[i][j];
        FOR(n, i) {
            FOR(m, j) {
//                cout << i << j << endl;
                vi a = {b[i][j], b[n-(i+1)][j], b[i][m-(j+1)], b[n-(i+1)][m-(j+1)]};
                sort(all(a));
                int aver = (a[1] + a[2]) / 2;
                FOR(4, x) ans += abs(a[x]-aver);
            }
        }
        cout << ans/4 << endl;
    };

    return 0;
}
