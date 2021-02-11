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

long long n,k,a[500005],lef[500005],righ[500005],ansr[5000005],ansl[500005],i,ans,ind;
int main(){
	cin>>n;
	for(k=1;k<=n;k++)
	cin>>a[k];
	
	for(k=1;k<=n;k++){
		i=k-1;
		while(i>0 && a[i]>a[k]){
			i=lef[i];
		}
		lef[k]=i;
		ansl[k]=ansl[i]+(k-i)*a[k];
	}
	for(k=n;k>=1;k--){
		i=k+1;
		while(i<=n && a[i]>a[k]){
			i=righ[i];
		}
		righ[k]=i;
		ansr[k]=ansr[i]+(i-k)*a[k];
		
		if(ansr[k]+ansl[k]-a[k]>ans){
			ans=ansr[k]+ansl[k]-a[k];
			ind=k;
		}
	}
	for(k=ind-1;k>=1;k--){
		a[k]=min(a[k],a[k+1]);
	}
	for(k=ind+1;k<=n;k++)
	a[k]=min(a[k],a[k-1]);
	
	for(k=1;k<=n;k++)
	cout<<a[k]<<" ";
}