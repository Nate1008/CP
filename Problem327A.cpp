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
            cout<<i<<" "<<k<<"\n";
            int ones = 0;
            for(int m = i; m <= k; m++) {
                b[m] = 1-b[m];
            }
            for(int m = 0; m < n; m++) {
                cout<<b[m]<<"\t";
                if(b[m] == 1) {
                    ones++;
                }
            }
            mo = max(mo, ones);
            cout<<"\n";
        }
    }
    cout<<mo;
    return 0;
}

