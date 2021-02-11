#include <iostream>
#include <cstdio>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    float ans = 0;
    for(float i = n; i > 0; i--) {
        ans += 1/i;
    }
    cout<<ans;
    return 0;
}
