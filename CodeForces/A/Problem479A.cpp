#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    vector<int> s;
    for (int i=0; i < 3; i++) {
        int t;
        cin >> t;
        s.push_back(t);
    }
    int n, m;
    int a, b, c;
    a = s[0];
    b = s[1];
    c = s[2];
    if (a + b > a * b) {
        m += a + b;
    } else {
        m += a * b;
    }

    if (m + c > m * c) {
        m += c;
    } else {
        m *= c;
    }

    a = s[2];
    b = s[1];
    c = s[0];
    if (a + b > a * b) {
        n += a + b;
    } else {
        n += a * b;
    }

    if (n + c > n * c) {
        n += c;
    } else {
        n *= c;
    }
    
    cout << max(m, n);

    return 0;
}