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
#define mi map<int, int>
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    int r, c, n, k;
    cin >> r >> c >> n >> k;
    vt<int> vtx;
    vt<int> vty;
    mi x;
    mi y;
    int ans = 1;
    for(int i = 0; i < n; i++) {
        pi t;
        cin >> t.f >> t.s;
        x[t.f]++;
        y[t.s]++;
        if(x[t.f] == 1) {
            vtx.push_back(t.f);
        }
        if(y[t.s] == 1) {
            vty.push_back(t.s);
        }
    }

    for(int i = 0; i < vtx.size(); i++) {
        cout<<"X";
        if(x[i] >= k) {
            ans++;
        }
    }
    for(int i = 0; i < vty.size(); i++) {
        cout<<"Y";
        if(y[i] >= k) {
            ans++;
        }
    }

    cout<<ans;
    return 0;
}

