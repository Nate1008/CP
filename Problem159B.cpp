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

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> caps;
    map<int, int> markers;
    map<pi, int> same;
    int a = 0;
    int b = 0;
    for(int i = 0; i < n; i++) {
        pi t;
        cin >> t.f >> t.s;
        markers[t.s]++;
        same[t]++;
    }

    for(int i = 0; i < m; i++) {
        pi t;
        cin >> t.f >> t.s;
        caps[t.s]++;
        if(same[t] == 1) {
            same[t]++;
            b++;
        }
        a += min(caps[t.s], markers[t.s]);
        cout<<a<<"\t"<<t.s<<"\n";
    }
    cout<<a<<" "<<b;
    return 0;
}

