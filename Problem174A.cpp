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

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vi vol(n);
    vd ans(n);
    vi::iterator it;
    for(int i = 0; i < n; i++) {
        cin >> vol[i];
    }
    it = max(vol.begin(), vol.end());
    int k = distance(vol.begin(), it);
    cout<<k<<"\n";
    for(int i = 0; i < n; i++) {
        double diff = vol[k] - vol[i];
        b -= diff;
        ans[i] = diff;
    }
    if(b < 0) {
        cout<<-1;
        return 0;
    }
    double div = b/n;
    for(int i = 0; i < n; i++) {
        cout<<ans[i]+div<<"\n";
    }
    return 0;
}

