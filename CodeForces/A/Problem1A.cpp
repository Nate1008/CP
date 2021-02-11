#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

#define ll long long

int main() {
    int n, m;
    double a;
    cin >> n >> m;
    cin >> a;
    ll na = ceil(n/a);
    ll ma = ceil(m/a);
    cout << na*ma;
    return 0;
}