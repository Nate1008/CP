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

using namespace std;

int main() {
    float n, b;
    cin >> n >> b;
    vf vol(n);
    vf ans(n);
    vf::iterator it;
    float k = 0; 
    for(int i = 0; i < n; i++) {
        float t;
        cin >> t;
        k = max(k, t);
        vol[i] = t;
    }
    for(int i = 0; i < n; i++) {
        float diff = k - vol[i];
        b -= diff;
        ans[i] = diff;
    }
    if(b <= 0) {
        cout<<-1;
        return 0;
    }
    float div = b/n;
    for(int i = 0; i < n; i++) {
        printf("%.6f\n", ans[i]+div);
    }
    return 0;
}

