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
        int n, m, k;
        cin >> n >> m >> k;
        double c = n/k;
        if (c >= m) {
            cout << m << "\n";
            continue;
        }
        double j = m - c; 
        int ans = c - ceil(j/(k-1));
        cout << ans << "\n";
    }
    return 0;
}
