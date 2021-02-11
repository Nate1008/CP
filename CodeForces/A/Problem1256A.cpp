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
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll ans = 0;
        ll div = s/n;
        if (div > a) {
            ans = a*n;
        } else {
            ans = div*n;
        }
        ll dif = s - ans;
        if(dif > b) {
            cout << "NO" << "\n";
            continue;
        }
        cout << "YES" << "\n"; 
    }
    return 0;
}
