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
#define vl vector<long long>


using namespace std;

int main() {
    ll n, l;
    cin >> n >> l;
    vl lamps(n+2);
    lamps[0] = 0;
    lamps[n+1] = l;
    for(int i = 1; i < n+1; i++) {
        cin >> lamps[i];
    }
    sort(lamps.rbegin(), lamps.rend());
    float md = 0;
    for(int i = 0; i < lamps.size()-1; i++) {
        float dif = lamps[i]-lamps[i+1];
        if(i == 0 || i == n) {
            md = max(md, dif);
        } else {
            md = max(md, dif/2);
        }
    }

    printf("%.6",md);
    return 0;
}

