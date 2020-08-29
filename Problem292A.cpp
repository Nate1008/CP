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
    int q = 0;
    int maxq = 0;
    int t = 0;
    int pm = 0;
    for(int i = 0; i < n; i++) {
        int k, m;
        cin >> k >> m;
        cout<< k <<"\t"<< t<<"\n";
        q = pm - (k - t);
        cout<<q<<"\n";
        t = k;
        if(q < 0) {
            q = 0;
        }
        q += m;
        cout<<q<<"\n";
        maxq = max(maxq, q);
        cout<<m;
        pm = m;
    }
    int lastm = t + q;
    cout<<lastm<<" "<<maxq;
    return 0;
}

