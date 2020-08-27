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
    int n;
    cin >> n;
    for(int w = 0; w < n; w++) {
        int cap;
        ll moves = 0;
        cin >> cap;
        int odd = 0;
        int previous = 0;
        int i = 0;
        while (odd != cap) {
            odd = (i + 0.5) * 2;
            ll squares = pow(odd, 2) - pow(previous, 2);
            moves += squares * i;
            previous = odd;
            i++;
        }
        cout << moves << "\n";
    }
    return 0;
}