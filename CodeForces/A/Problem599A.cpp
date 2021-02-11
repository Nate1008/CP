#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (c+b < a) {
        ans += c+b;
    } else {
        ans += a;
    }

    if (a+b < c) {
        ans += a+b;
    } else {
        ans += c;
    }

    if (a+c < b) {
        ans += a+c;
    } else {
        ans += b;
    }
    cout << ans;
    return 0;
}