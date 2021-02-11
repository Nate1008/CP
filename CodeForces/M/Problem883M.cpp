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
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if(x < a) {
        a++;
    } else if (x > a) {
        a--;
    }

    if(y < b) {
        b++;
    } else if (y > b) {
        b--;
    }

    int len = abs(x - a);
    int wid = abs(y - b);
    if(wid == 0) {
        wid = 2;
    }
    if(len == 0) {
        len = 2;
    }  
    
    int peri = wid * 2 + len * 2;
    cout<<peri;
    return 0;
}

