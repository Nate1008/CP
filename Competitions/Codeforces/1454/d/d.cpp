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

void solve() {
	long long n;
    cin >> n;

    vector<pair<int, long long>> val;
    for (long long i = 2; i * i <= n; ++i) {
        int cnt = 0;
        while (n % i == 0) {
            ++cnt;
            n /= i;
        }
        if (cnt > 0) {
            val.push_back({cnt, i});
        }
    }
    if (n > 1) {
        val.push_back({1, n});
    }

    sort(val.rbegin(), val.rend());
    vector<long long> ans(val[0].first, val[0].second);
    for (int i = 1; i < int(val.size()); ++i) {
        for (int j = 0; j < val[i].first; ++j) {
            ans.back() *= val[i].second;
        }
    }

    cout << ans.size() << endl;
    FOR(sz(ans), i) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
