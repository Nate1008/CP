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
    int cap;
    cin >> cap;
    int ans = 0;
    for (int k = 0,n = cap; n > 0; k++, n--) {
        ans += ((k + 1) * (n-1)) + 1;
    }
    cout << ans;
    return 0;
}
