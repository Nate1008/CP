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
	int n, m;
    cin >> n >> m;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    if (sum < m) {
      cout << -1 << '\n';
      return;
    }
    vector<int> k1;
    vector<int> k2;
    for (int i = 0; i < n; i++) {
      if (b[i] == 1) {
        k1.push_back(a[i]);
      } else {
        k2.push_back(a[i]);
      }
    }
    sort(k1.rbegin(), k1.rend());
    sort(k2.rbegin(), k2.rend());
    int ans = (int) 1e9;
    int n1 = (int) k1.size();
    int n2 = (int) k2.size();
    sum = 0;
    for (int i = 0; i < n2; i++) {
      sum += k2[i];
    }
    int j = 0;
    for (int i = n2; i >= 0; i--) {
      while (j < n1 && sum < m) {
        sum += k1[j];
        j += 1;
      }
      if (sum >= m) {
        ans = min(ans, 2 * i + j);
      }
      if (i > 0) {
        sum -= k2[i - 1];
      }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
