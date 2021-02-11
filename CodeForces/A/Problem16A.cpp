#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int l,w;
    cin >> l >> w;
    char adjacent = 'A';
    for(int i = 0; i < l; i++) {
        char previous = 'A';
        string a;
        cin >> a;
        for(int n = 0; n < w; n++) {
            if (previous == 'A') {
                if (adjacent == a[n]) {
                    cout << "NO";
                    return 0;
                }
                previous = a[n];
            } else if (previous != a[n]) {
                cout << "NO";
                return 0;
            } else {

            }
        }
        adjacent = previous;
    }
    cout << "YES";
    return 0;
}