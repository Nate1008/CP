#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int len;
    cin >> len;
    vector<int> cans;
    int ans = 0;
    vector<int> order;
    for (int i = 0; i < len; i++) {
        int t;
        cin >> t;
        cans.push_back(t);
    }

    for(int n = 0; n < len; n++) {
        int max = -1;
        for(int i = 0; i < cans.size(); i++) {
            if ((max == -1 || cans.at(max) < cans.at(i)) && count(order.begin(), order.end(), i) == 0) {
                max = i;
            }
        }
        order.push_back(max);
        int val = cans.at(max);
        ans += val * n + 1;
    }
    cout << ans << "\n";
    for (int i = 0; i < len; i++) {
        cout << order.at(i)+1 << " ";
    }
    return 0;
}