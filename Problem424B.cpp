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
    vi dist(n);
    vi pop(n);
    FOR(n, i) {
        int a, b, c;
        cin >> a >> b >> c;
        int v = pow(a, 2) + pow(b, 2);
        dist[i] = v;
        pop[i] = c;
        //cout<<"DIS: "<<v<<"\n";
    }
    sort(ALL(dist));
    FOR(n, i) {
        k += pop[i];
        cout<<"DIS: "<<dist[i]<<" POP: "<<pop[i]<<"\n";
        if(k >= 1000000) {
            float ans = sqrt(dist[i]);
            cout.precision(15);
            cout<<ans;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

