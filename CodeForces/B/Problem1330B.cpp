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
#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb(s) push_back(s);

#define nl endl
#define TC int _t; cin >> _t; FOR(_t, _q)

using namespace std;

int arr[200010];
int an[200010],kr;
int main(){
	int t;
	cin>>t;
	while(t--){
		kr=0;
		int n;
		cin>>n;
		int d[200010]={0},a[200010]={0};
		int ma=0,mm=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			ma=max(ma,++d[arr[i]]);
			mm=max(mm,arr[i]);
			if(ma==1 && mm==i+1){
				a[i]=1;
			}
		}
		int dd[200010]={0};
		ma=0;mm=0;
		for(int i=n-1;i>0;i--){
			ma=max(ma,++dd[arr[i]]);
			mm=max(mm,arr[i]);
			if(ma==1 && n-i==mm && a[i-1]){
				an[kr++]=i;
			}
		}
		cout<<kr<<endl;
		for(int i=0;i<kr;i++){
			cout<<an[i]<<" "<<n-an[i]<<endl;
		}
	}
}
