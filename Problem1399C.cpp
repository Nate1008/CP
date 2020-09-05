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
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define pi pair<int, int>
#define f first
#define s second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    TC {
        int n;
        cin >> n;
        vi w(n);
        FOR(n, i) {
            cin >> w[i];
        }
        sort(ALL(w));
        int mt = 0;
        for(int i = n-1; i >= 0; i--) {
            for(int c = 0; c < i; c++) {
                cout<<"START: "<<c<<"\t"<<"END: "<<i<<"\n\n";
                for(int v = 0; v <= n; v++) {
                    int count = 0;
                    int total = w[c] + w[i];
                    for(int k = c, x = i; k < x; k++, x--) {
                        if(k == v) {
                            k++;
                        } else if(x == v) {
                            x--;
                        }
                        int sum = w[k] + w[x];
                        if(w[k] + w[x] == total && k != x) {
                            count++;
                        }
                        cout<<"FIRST: "<<k<<"\t"<<"SECOND: "<<x<<"\t"<<"SUM: "<<sum<<"\t"<<"COUNT: "<<count<<"\t"<<"V: "<<v<<"\n";
                    }
                    mt = max(mt, count);
                }
                cout<<"\n";
            }
        }
        cout<<mt<<"\n";
    }
    return 0;
}

