#include <iostream>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (gcd(a,b) != a) {
        cout << "-1";
        return 0;
    }
    int c = 0;
    int d = b/a;
    while(d != 1) {
        if (d % 2 == 0) {
            d /= 2;
        } else if(d % 3 == 0) {
            d /= 3;
        } else {
            c = -1;
            break;
        }
        c++;
    } 
    cout << c; 
    return 0;
}
