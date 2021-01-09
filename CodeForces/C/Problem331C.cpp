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
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    while(n != 0) {
        int a = n;
        int d = log10(n);
        int m = a % 10;
        for(int i = 0; i < d; i++) {
            a /= 10;
            int t = a % 10;
            m = max(m, t);
        }
        n -= m;
        c++;
    }
    cout<<c;
    return 0;
}

