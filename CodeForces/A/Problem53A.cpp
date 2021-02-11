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
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    string a;
    cin >> a;
    int n;
    cin >> n;
    vt<string> l;
    for(int i = 0; i < n; i++) {
        string t;
        cin >> t;
        l.push_back(t);
    }
    string sm = " ";
    bool pass = false;
    for(int i = 0; i < n; i++) {
        if(l[i].find(a) == 0) {
            if(sm > l[i] || sm == " ") {
                pass = true;
                sm = l[i];
            }
        }
    }
    if(pass) {
        cout<<sm;
    } else {
        cout<<a;
    }
    return 0;
}

