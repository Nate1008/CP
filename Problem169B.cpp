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
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++) {
        for(int k = 0; k < b.length(); k++) {
            a[i] = max(a[i], b[k]);
        }
    }
    cout<<a;
    return 0;
}

