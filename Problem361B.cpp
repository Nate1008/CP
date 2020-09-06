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
    if(n == 1) {
        cout<<-1;
        return 0;
    }
    vi perm(n);
    perm[0] = 1;
    for(int i = 2; i < k+2; i++) {
        perm[i-1] = i;
    }

    for(int i = k+2; i <= n; i++){
        if(i % 2 == 0) {
            if(perm[i%n] != 0) {
                perm[i-1] = perm[i%n];
                perm[i%n] = i;
            } else {
                perm[i%n] = i;
            }
        } else {
            if(perm[i%n] != 0) {
                perm[i-1] = perm[i%n];
                perm[i%n] = i;
            } else {
                perm[i%n] = i;
            }
        }
        cout<<i<<"\n";
    }
    
    for(int i = 0; i < n; i++) {
        cout<<perm[i]<<" ";
    }
    return 0;
}

