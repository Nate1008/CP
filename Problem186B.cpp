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
    int n,t1,t2,k;
    cin >> n >> t1 >> t2 >> k;
    vpf rank(n);
    FOR(n, i) {
        int s1, s2;
        cin >> s1 >> s2;
        pf t;
        t.F = max(((s1*t1*(1-(k/100.0f)))+(s2*t2)), ((s2*t1*(1-(k/100.0f)))+(s1*t2)));
        t.S = i+1;
        rank[i] = t;
    }
    sort(RALL(rank), sorted);
    FOR(n, i){
        pf t = rank[i];
        // t.F = floor(t.F*100 + 0.5)/100;
        printf("%d %.8f \n", t.S,t.F);
    }
    return 0;
}

