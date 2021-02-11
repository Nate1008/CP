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
const int MAX_N = 2000;
const int inf = MAX_N + 9;
 
char a[MAX_N + 5][MAX_N + 5];
 
void solve(int n, int ans[])
{
	int i, j;
	int mnr[10], mxr[10] = { 0 }, mnc[10], mxc[10] = { 0 };
	fill(mnr, mnr + 10, inf);
	fill(mnc, mnc + 10, inf);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			int x = a[i][j] - '0';
			mnr[x] = min(mnr[x], i), mxr[x] = max(mxr[x], i);
			mnc[x] = min(mnc[x], j), mxc[x] = max(mxc[x], j);
		}
	}
 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			int x = a[i][j] - '0';
			ans[x] = max(ans[x], max(mxr[x] - i, i - mnr[x]) * max(n - j, j - 1));
			ans[x] = max(ans[x], max(mxc[x] - j, j - mnc[x]) * max(n - i, i - 1));
		}
	}
}
 
int main()
{
	int t;
	cin >> t;
 
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i] + 1;
		int ans[10] = { 0 };
		solve(n, ans);
		for (int i = 0; i < 10; i++)
			cout << ans[i] << (i == 9 ? '\n' : ' ');
	}
}
