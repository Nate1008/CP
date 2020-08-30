#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>

#include <algorithm>
#include <numeric>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>

#define ll long long
#define pi pair<int, int>
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    vt<int> a;
    vt<int> b;
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    int same = 0;
    for(int i = 0; i < 3; i++) {
        if(a[i] == b[i]) {
            same++;        
        }
    } 
    if(same >= 2) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}

