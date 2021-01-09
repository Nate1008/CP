#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for (int j = 0; j < tests; j++) {
        int q;
        double sum = 0;
        cin >> q;
        for (int i = 0; i < q; i++) {
            int n; 
            cin >> n;
            sum += n;
        }
        int ans = (int)ceil(sum / q);
        cout << ans << "\n";
    }
    return 0;
}