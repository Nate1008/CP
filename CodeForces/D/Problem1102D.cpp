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


void forward(string& s, int x) {
	int n = (int)size(s);
	array<int, 3> cnt;
	for(int i = 0; i < 3; i++) {
		cnt[i] = count(all(s), i+'0');
	}
	for(int i = 0; i < n; i++) {
		if (cnt[x] < n/3 && s[i]-'0' > x && cnt[s[i]-'0'] > n/3) {
			cnt[x]++;
			cnt[s[i]-'0']--;
			s[i] = char('0'+x);
		}
	}
}

void backward(string& s, int x) {
	int n = (int)size(s);
	array<int, 3> cnt;
	for(int i = 0; i < 3; i++) {
		cnt[i] = count(all(s), i+'0');
	}
	for(int i = n-1; i >= 0; i--) {
		if (cnt[x] < n/3 && s[i]-'0' < x && cnt[s[i]-'0'] > n/3) {
			cnt[x]++;
			cnt[s[i]-'0']--;
			s[i] = char('0'+x);
		}
	}
}		

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	forward(s, 0);
	forward(s, 1);
	backward(s, 2);
	backward(s, 1);

	cout << s << endl;

}		

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	

    // TC
    	solve();

    return 0;
}
