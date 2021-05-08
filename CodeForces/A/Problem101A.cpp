#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>

#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <climits>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define pii pair<pi, int>
#define mi map<int, int>
#define ms map<string, int>
//#define mc map<char, int>
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

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define FORE(t, q) for(int q = 0; q <= t; q++)
#define RFORE(t, q) for(int q = t; q >= 0; q--)

#define FORN(t, q, v) for(int q = v; q < t; q++)
#define RFORN(t, q, v) for(int q = t; q > v; q--)
#define FOREN(t, q, v) for(int q = v; q <= t; q++)
#define RFOREN(t, q, v) for(int q = t; q >= v; q--)

#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()

#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
        string str; int k; cin>>str>>k;
    map<char,int>m;
    for(int i=0;i<str.size();i++)
        m[str[i]]++;
        int ans=m.size();
    if(k>str.size()) {cout<<0; return 0;}
    while(k)
    {
        int mn=m[str[0]]; char mc=str[0];
        for(int i=0;i<str.size();i++){
        if(m[str[i]]<mn) {mn=m[str[i]]; mc=str[i];}}
        while(m[mc]!=0)
        {
            m[mc]--;
            str.erase(str.find(mc),1);
            k--;
            if(k==0) break;
        }
        if(m[mc]==0) ans--;
    }
    cout<<ans<<endl;
    cout<<str;
}