#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n;
    int left = 0;
    int right = 0;
    string com;
    cin >> n;
    cin >> com;

    for (int i = 0; i < n; i++) {
        if(com[i] == 'R') {
            right++;
        }
        if (com[i] == 'L') {
            left++;
        }
    }
    cout << left + right + 1;
    return 0;
}