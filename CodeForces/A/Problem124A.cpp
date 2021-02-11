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
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n - a;
    if((ans-b) > 1) {
        ans -= (ans-b)-1;
    }
    cout << ans;
    return 0;
}
