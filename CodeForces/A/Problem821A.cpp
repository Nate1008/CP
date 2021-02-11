#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<vector<int> > lab;
    for(int i = 0; i < size; i++) {
        vector<int> row;
        for(int j = 0; j < size; j++) {
            int unit;
            cin >> unit;
            row.push_back(unit);
        }
        lab.push_back(row);
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (lab[i][j] == 1){
                continue;
            }
            bool pass = 1;
            for(int n = 0; n < size; n++) {
                for(int m = 0; m < size; m++) {
                    if (lab[i][m] + lab[n][j] == lab[i][j]) {
                        pass = 0;
                    }      
                }
            }
            if (pass) {
                std::cout << "No";
                return 0;
            }
        }
    }
    std::cout << "Yes";
    return 0;
}
