#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    if (n == 0) {
        cout << m;
        return 0;
    } else if (m == 0) {
        cout << n;
        return 0;
    } else if (a == b) {
        cout << 0;
        return 0;
    }
    do {
        if(n >= 0){
            n--;
        }

        if(m >= 0){
            m--;
        }
    } while(a[n] == b[m]);
    cout << (n+1)+(m+1);
    return 0;
}