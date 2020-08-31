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
    int n;
    cin >> n;
    int o = 0;
    int z = 0;
    int c = 0;
    for(int i = 0; i < n; i++) {
        bool t;
        cin >> t;
        if(t) {
            o++;
            z = max(z, c);
            c = 0;
        } else {
            c++;
            z = max(z, c);
        }
    }
    cout<<o+z;
    return 0;
}

