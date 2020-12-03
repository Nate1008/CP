#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n;i++) {
        int implement = 0;
        for(int j = 0; j < 3; j++) {
            int boolean;
            cin >> boolean;
            if (boolean == 1) {
                implement++;
            }
        }
        if (implement >= 2) {
            ans++;
        }
    }
    cout << ans;
}