#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int times;
    cin >> times;
    for(int i=0; i < times; i++) {
        int a, b, n;
        cin >> a >> b >> n;
        int oper = 0;
        while (a <= n && b <= n) {
            if (b > a) {
                a += b;
            } else {
                b += a;
            }
            oper++;
        }
        cout << oper << '\n';
    }
    return 0;
}