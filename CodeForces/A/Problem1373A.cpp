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
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = 0;
        ll m = 0;
        if(a < c) {
            n = 1;
        } else {
            n = -1;
        }

        if(c < a*b) {
            m = b;
        } else {
            m = -1;
        }
        cout << n << " " << m << "\n";
    }
    return 0;
}
