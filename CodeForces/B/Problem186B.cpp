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

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

bool sorted(pf a, pf b) {
    if(a.F > b.F) {
        return false;
    } else if (b.F > a.F){
        return true;
    } else {
        if(a.S > b.S) {
            return true;
        } else {
            return false;
        }
    }
    
}

int main() {
    double n, t1, t2, k;
	cin>>n>>t1>>t2>>k;
	k /= 100;
	vector<pair<double, int>> v(n+1);
	
	double a, b;
	for(int i = 1; i <= n; ++i){
		cin>>a>>b;
		v[i].first = max(((a * t1) - (a * t1 * k)) + b * t2, ((b * t1) - (b * t1 * k)) + a * t2); 
		v[i].second = -i;
	}
	
	sort(RALL(v));
	
	for(int i = 0; i < n; ++i)
		printf("%d %.2lf\n", -v[i].second, v[i].first);
	
	return 0;
    return 0;
}

