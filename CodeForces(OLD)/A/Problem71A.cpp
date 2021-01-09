#include <iostream>
#include <cstdio>
using namespace std;

void main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str.length() > 10) {
            printf("%c%d%c", str.at(0), (int) str.length()-2, str.at(str.length()-1));
            cout << endl;
        } else {
            cout << str;
            cout << endl;
        }
    }
}