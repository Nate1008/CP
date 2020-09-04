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
    string a = "";
    string b = "";
    for(int q = 0; q < t; q++) {
        int l;
        cin >> l;
        string str;
        cin >> str;
        for(int i = 0; i < l; i++) {
            // int k = str[i] - 48;
            char x = str[i] / 2;
            char y = str[i] - x;
            a += x;
            b += y;
        }
        // cout<<a<<"\n"<<b<<"\n"; 
    }
    return 0;
}

