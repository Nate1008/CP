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

#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
    int n, q, S = 0; cin >> n >> q;
    vpi p(q);
    vi cnt(n, 0), pre(n+1, 0);
    for(pi i : p){
        cin >> i.F >> i.S;
        --i.F, --i.S;
        for(int j = i.F; j <= i.S; j++) ++cnt[j];
    }
    p[0] = cnt[0];
    for(int i = 0; i < n; i++) if (cnt[i] == 1) pre[i-1] = cnt[i]; else pre[i] = pre[i-1];
    for(auto i : cnt) cout << i << " ";
    cout << endl;
    for(auto i : pre) cout << i << " ";
//    for(auto i : p) {
//        int l = i.F, r = i.S;
//        pre[l]
//    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
