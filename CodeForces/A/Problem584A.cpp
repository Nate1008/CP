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
    string k;
    cin >> n;
    cin >> k;
    if(n <= k.length()-1) {
        cout << "-1";
        return 0;
    }
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (i == n-1 && k.length() > 1) {
            ans += k[1];
        } else { 
            ans += k[0];
        }
    }
    cout << ans;
    return 0;
}