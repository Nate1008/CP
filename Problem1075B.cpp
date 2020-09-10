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

int main() {
    int n, m;
    cin >> n >> m;
    vi coor(n+m);
    vi taxi;
    vi rider;
    vi ans(m);
    FOR(n+m, i) {
        cin >> coor[i];
    }

    FOR(n+m, i) {
        int t;
        cin >> t;
        if(t == 1) {
            taxi.push_back(coor[i]);
        } else {
            rider.push_back(coor[i]);
        }
    }
    sort(ALL(taxi));
    
    FOR(n, i) {
        int k = lower_bound(ALL(taxi), rider[i])-B(taxi);
        cout<<k<<'\n';
        if(k == 0) {
            ans[k]++;
        } else if (k == m) {
            ans[k-1]++;
        } else {
            int a = abs(rider[i] - taxi[k]);
            int b = abs(rider[i] - taxi[k-1]);
            if(a < b){
                ans[k]++;
            } else {
                ans[k-1]++;
            }
        }
    }

    FOR(m, i) {
        cout<<ans[i]<<" ";
    }
    return 0;
}

