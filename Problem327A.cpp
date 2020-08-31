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

    int k = find(b.begin(), b.end(), 0) - b.begin();
    int a = find(b.rbegin(), b.rend(), 0) - b.rbegin();
    cout<<k<<a;
    int z = 0;
    int o = 0;
    for(int i = k; i <= a; i++) {
        if(b[i]) {
            o++;
        } else {
            z++;
        }
        
    }
    int ans = z - o;
    if(ans < 0) {
        ans = 0;
    }
    cout<<ans;
    return 0;
}

