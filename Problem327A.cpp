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
    vi b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int mo = 0;
    for(int i = 0; i < n; i++) {
        for(int k = i; k < n; k++) {
            int ones = 0;
            for(int m = i; m < k; m++) {
                if(!b[m]) {
                    ones++;
                }
            }
            mo = max(mo, ones);
        }
    }
    return 0;
}

