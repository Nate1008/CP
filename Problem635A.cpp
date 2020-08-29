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
    int ans = 0;
    cin >> r >> c >> n >> k;
    vt<pi> vio;
    for(int i = 0; i < n; i++) {
        pi t;
        cin >> t.f >> t.s;
        vio.push_back(t);
    }

    for(int i = 1; i <= r; i++) {
        for(int j = 1; i <= c; i++) {
            for(int y = 1; y <= r; y++) {
                for(int x = 1; x <= c; x++) {
                    int pin = 0;
                    for(int v = 0; v < vio.size(); v++) {
                        pi t = pi(j, i);
                        pi e = pi(x, y);
                        pi p = vio[v];
                        if((p.f >= t.f && p.s >= t.s) && (p.f <= e.f && p.s <= e.s)) {
                            pin++;
                        }
                    }
                    cout<<pin;
                    if(pin >= k) {
                        ans++;
                    }
                }
            }
        }
    }
    
    cout << ans;
    return 0;
}

