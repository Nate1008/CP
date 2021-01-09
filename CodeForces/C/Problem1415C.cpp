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
const int mx=2e5+5,mod=1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC {
        ll n,p,k;cin>>n>>p>>k;
        string s;cin>>s;
        ll x,y;cin>>x>>y;
        ll dp[mx];
        memset(dp,0,sizeof(dp));
        for(ll i=n-1;i>=0;--i)
        {
            if(s[i]=='0')dp[i]=x+((i+k)<n?dp[i+k]:0);
            else dp[i]=((i+k)<n?dp[i+k]:0);
        }


        ll m=1e18;
        for(ll i=0;i<=n-p;++i)
        {
            m=min(m,y*i+dp[p-1+i]);
        }
        cout<<m<<endl;
    };

    return 0;
}
