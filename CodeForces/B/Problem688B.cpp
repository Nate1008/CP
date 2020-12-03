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
    string a;
    cin >> a;
    string ap = a;
    reverse(a.begin(), a.end());
    ap += a;
    cout << ap;
    return 0;
}
