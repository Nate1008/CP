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
        int n, k;
        cin >> n >> k;
        if(pow(k, 2) > n){
            cout<<"NO";
        }else if (n%2==k%2) {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout << endl;
    }
    return 0;
}
