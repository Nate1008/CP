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
    int n,k;
    cin >> n >> k;
    if(n < k) {
        cout << "-1";
        return 0; 
    } 

    int ans = ceil(n / 2.0);
    if(ans % k != 0) {
        ans += k-(ans % k);
    }
    cout << ans;
    return 0;
}
