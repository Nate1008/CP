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

char find_max(string a) {
    char max_char = a[0];
    for(int i = 1; i < a.length(); i++) {
        max_char = max(max_char, a[i]);
    }
    return max_char;
}



int main() {
    unsigned long long n;
    cin >> n;
    string a = to_string(n);
    int b = a.length() / 3;
    for(int i = 0; i < b; i++) {
        string m = a.substr(i*3, 3);
        //int a = (int) m;
    }
    return 0;
}

