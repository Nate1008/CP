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
    vt<pi> past; 
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
            b++;
        }
        if(caps[t.s] == 1) {
            past.push_back(t);
        }
    }
    for(int i = 0; i < past.size(); i++) {
        pi t = past[i];
        a += min(caps[t.s], markers[t.s]);
    }
    cout<<a<<" "<<b;
    return 0;
}

