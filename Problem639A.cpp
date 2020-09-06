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
    int n, q, k;
    cin >> n >> q >> k;
    vi t(n);
    vi online;
    FOR(n, i) {
        cin >> t[i];
    }

    FOR(q, i) {
        int type, a;
        cin >> type >> a;
        if(type == 2) {
            int c = count(ALL(online), t[a]);
            if(c > 0) {
                cout<<"YES"<<"\n";
            } else {
                cout<<"NO"<<"\n";
            }
        } else if(online.size() == k){
            int min = 0;
            for(int v = 1; v < online.size(); v++) {
                if(online[min] > online[v]) {
                    min = v;
                }
            }
            if(t[a] > online[min]) {
                online[min] = t[a];
            }
        } else if (online.size() < k){
            online.push_back(t[a]);
        }
    }
    
    return 0;
}

