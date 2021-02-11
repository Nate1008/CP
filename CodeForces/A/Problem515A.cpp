#include <iostream>
#include <cstdio>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int a, b, s;
    cin >> a >> b >> s;
    int d = abs(a)+abs(b);
    if(d>s){
        cout<<"No";
        return 0;
    }

    if(d == s) {
        cout<<"Yes";
        return 0;
    }

    if(d%2==s%2) {
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
