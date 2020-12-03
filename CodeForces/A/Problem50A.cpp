#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int w, l;
    cin >> w >> l;
    int area = w * l;
    if (area % 2 == 1) {
        area--;
    }
    area /= 2;
    cout << area;
    return 0;
}