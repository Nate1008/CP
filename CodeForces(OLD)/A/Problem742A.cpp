#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n%8==0&&n!=0) {
        cout<<"6";
        return 0;
    }
    int ans = pow(8, (n%8));
    cout << (ans%10);
    return 0;
}
