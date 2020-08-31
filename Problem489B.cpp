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
    int b;
    cin >> b;
    vi boys(b);
    for(int i = 0; i < b; i++) {
        cin >> boys[i];
    }
    int g;
    cin >> g;
    vi girls(g);
    for(int i = 0; i < g; i++) {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    int k = 0;
    int n = 0;
    int match = 0;
    while(k > 0 && n < boys.size()) {
        for(int i = n; i < boys.size(); i++) {
            int dif = boys[i] - girls[k];
            cout<<dif<<"\n";
            if(abs(dif) <= 1) {
                match++;
                n++;
                break;
            }
        }
        k++;
    }
    cout<<match;
    return 0;
}

