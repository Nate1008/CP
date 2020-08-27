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
    unsigned long long n;
    cin >> n;
    string a = to_string(n);
    int b = a.length() / 3;
    for(int i = b; i > 0; i--) {
        string m = a.substr(i*3);
        cout << m;
    }
    return 0;
}

