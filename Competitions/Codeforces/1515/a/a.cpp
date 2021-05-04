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
#define ppb(s) pop_back(s);


#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

void solve() {
	int n, x; cin >> n >> x;
	int sum = 0;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(all(a));
	for(int i = 0; i < n; i++) {
		sum += a[i];
	}

	if (sum == x) {
		cout << "NO" << endl;
		return;
	}

	sum = 0;
	int p = -1;
	for(int i = 0; i < n; i++) {
		sum += a[i];
		if (sum == x) {
			p = i;
			break;
		}
	}

	if (p != -1) {
		for(int t = 0; t < n; t++) {
			int b = a.back();
			a.ppb();
			a.insert(a.begin(), b);
			sum = 0;
			int flag = 0;
			for(int i = 0; i < n; i++) {
				sum += a[i];
				if (sum == x) {
					flag = 1;
				}
			}
			if (flag == 0) break;
		}
	}

	cout << "YES" << endl;
	for(auto& c : a) cout << c << " ";
	cout << endl;
}		

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC
    	solve();

    return 0;
}
