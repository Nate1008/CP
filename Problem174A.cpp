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
    for(int i = 0; i < n; i++) {
        cin >> vol[i];
    }
    it = max(vol.begin(), vol.end());
    int k = distance(vol.begin(), it);
    for(int i = 0; i < n; i++) {
        float diff = vol[k-1] - vol[i];
        b -= diff;
        ans[i] = diff;
    }
    if(b < 0) {
        cout<<-1;
        return 0;
    }
    float div = b/n;
    cout<<div<<"\n";
    for(int i = 0; i < n; i++) {
        cout<<ans[i]+div<<"\n";
    }
    return 0;
}

