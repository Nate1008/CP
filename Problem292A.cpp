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
    int n;
    cin >> n;
    int q = 1;
    int maxq = 0;
    int t = 0;
    for(int i = 0; i < n; i++) {
        int k, m;
        cin >> k >> m;
        k = t;
        q--;
        q += m;
        maxq = max(maxq, q);
    }
    int lastm = t + q;
    cout<<lastm<<" "<<maxq;
    return 0;
}

