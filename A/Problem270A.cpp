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
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        (360%(180-a))?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}
