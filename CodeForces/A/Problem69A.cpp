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
    vector<int> coor = vector<int>(3);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            int t;
            cin >> t;
            coor[j] += t;
        }
    }

    for(int i = 0; i < 3; i++) {
        if (coor[i] != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}