#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int d,e,f,g;
        cin >> d >> e >> f >> g;
        pair<int, int> a = pair<int, int>(d,e);
        pair<int, int> b = pair<int, int>(f,g);
        int ma = max(a.first, a.second);
        int mb = max(b.first, b.second);
        if (ma != mb) {
            cout << "No" << "\n";
            continue;
        }
        int na = min(a.first, a.second);
        int nb = min(b.first, b.second);
        if (ma == na + nb) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    return 0;
}