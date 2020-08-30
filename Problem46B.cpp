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
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    vt<string> sizes;
    sizes.push_back("S");
    sizes.push_back("M");
    sizes.push_back("L");
    sizes.push_back("XL");
    sizes.push_back("XXL");
    vt<string>::iterator it;
    vt<int>::iterator ite;
    map<int, int> si;
    for(int i = 0; i < 5; i++) {
        cin >> si[i];
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        it = find(sizes.begin(), sizes.end(), a);
        int k = distance(sizes.begin(), it);
        pi mini;
        for(int b = 0; b < 5; b++) {
            if(si[b] != 0) {
                int d = b - k;
                if(abs(d) < mini.f && b > mini.s) {
                    cout<<d<<"\n";
                    mini.f = abs(d);
                    mini.s = b;
                }
            }
        }
        //si[mini]--;
        cout<<si[mini.s]<<"\n";
        cout<<sizes[mini.s]<<"\n";
    }
    return 0;
}

