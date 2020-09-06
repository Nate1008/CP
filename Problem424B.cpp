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
#define f first
#define s second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>
#define vpii vector<pii>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    bool pass = false;
    double x = 0, y = 0;
    vpii coor(n);
    FOR(n, i) {
        pii t;
        cin >> t.f.f >> t.f.s >> t.s;
        coor[i] = t;
    }
    sort(ALL(coor));
    FOR(n, i) {
        int p = coor[i].s;
        int t = coor[i].f.f;
        int l = coor[i].f.s;
        k += p;
        if(k >= 1000000 && !pass) {
            pass = true;
            x = t;
            y = l; 
        }
    }
    if(k < 1000000) {
        cout<<-1;
        return 0;
    }
    float ans = sqrt((pow(x, 2) + pow(y, 2)));
    printf("%.8f", ans);
    return 0;
}

