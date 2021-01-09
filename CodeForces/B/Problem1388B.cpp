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
    for(int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int x = (n+3)/4;
        string ans = "";
        for(int i = 0; i < n-x; i++) {
            ans += "9";
        }
        for(int i = 0; i < x; i++) {
            ans += "8";
        }
        cout << ans << "\n";
    }
    return 0;
}
