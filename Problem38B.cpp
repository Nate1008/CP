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

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q+-)
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
    char r, k;
    int rx, ry, ky, kx;
    cin >> r >> ry >> k >> ky;
    int ans = 64 - 32;
    kx = (k - 'a')+1;
    rx = (k - 'a')+1;
    if(kx <= 2 || kx >= 7) {
        ans += 2;
    }
    if(ky <= 2 || ky >= 7) {
        ans += 2;
    }
    cout<<kx<<"\t"<<ky<<"\n";
    if(kx == 1 || kx == 8) {
        ans += 1;
    }
    if(ky == 1 || ky == 8) {
        ans += 1;
    }
    if(rx <= 2 || rx >= 7) {
        ans -= 2;
    }
    if(ry <= 2 || ry >= 7) {
        ans -= 2;
    }
    cout<<kx<<"\t"<<ky<<"\n";
    if(rx == 1 || rx == 8) {
        ans -= 1;
    }
    if(ry == 1 || ry == 8) {
        ans -= 1;
    }
    cout<<ans;
    return 0;
}

