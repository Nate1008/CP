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
#include <iterator>
#include <functional>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <climits>

#define ll long long
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define pi pair<int, int>
#define f first
#define s second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>


using namespace std;

int main() {
    int t;
    cin >> t;
    for(int q = 0; q < t; q++) {
        string a = "";
        string b = "";
        int l;
        cin >> l;
        string str;
        cin >> str;
        for(int i = 0; i < l; i++) {
            int k = str[i] - 48;
            if(a == b) {
                int x = ceil(k / 2);
                int y = k - x;
                a += to_string(x);
                b += to_string(y);
            } else if(a > b) {
                a += '0';
                b += to_string(k);
            } else {
                a += to_string(k);
                b += '0';
            }
        }
        cout<<a<<"\n"<<b<<"\n"; 
    }
    return 0;
}

