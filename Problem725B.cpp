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
#define ull unsigned long long
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

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length() - 1;
    char last = s[len];
    s.erase(len);
    ll t = 0;
    ll k = stoll(s);
    if(last == 'f') {
        t += 1;
    } else if(last == 'e') {
        t += 2;
    } else if(last == 'd') {
        t += 3;
    } else if(last == 'a') {
        t += 4;
    } else if(last == 'b') {
        t += 5;
    } else if(last == 'c') {
        t += 6;
    }
    cout<<"T: "<<t<<"\n";
    
    int m = k % 4;
    if(m == 3 || m == 0) {
        k -= 3;
    } else {
        k--;
    }
    cout<<"K: "<<k<<"\n";
    t += k;
    cout<<"T: "<<t<<"\n";
    
    if(k % 2 == 1) {
        t += ceil(k/2.0) * 6;
    } else {
        t += floor(k/2.0) * 6;
    }
    cout << t;
    return 0;
}

