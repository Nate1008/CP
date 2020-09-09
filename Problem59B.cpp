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

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    int n;
    cin >> n;
    vi flow(n);
    int odd = 0;
    FOR(n, i) {
        cin >> flow[i]; 
        if(flow[i] % 2 == 1) {
            odd++;
        }
    }
    if(odd == 0) {
        cout<<0;
    }
    sort(RALL(flow));

    int sum = 0;
    if(odd % 2 == 1) {
        FOR(n, i) {
            sum += flow[i];
        } 
    } else {
        int odds = 0;
        FOR(n, i) {
            if(odds == odd - 1) {
                break;
            }
            sum += flow[i];
            if(flow[i] % 2 == 1) {
                odds++;
            }
        }
    }


    return 0;
}

