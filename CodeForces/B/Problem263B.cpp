#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> sqr;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sqr.push_back(t);
    }
    if (k > n) {
        cout << "-1";
        return 0;
    }
    sort(sqr.begin(), sqr.end(), greater<int>());
    int ans = sqr.at(k-1);
    cout << ans << " " << ans;
    return 0;
}