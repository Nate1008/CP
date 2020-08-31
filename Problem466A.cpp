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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int price = 0;
    if (m > n) {
        price += min(n * a, b);
        cout<<price;
        return 0;
    }
    while(n >= m) {
        price += min(m * a, b);
        n -= m;
    }
    
    while(n > 0) {
        int mini = min(a, b);
        if(mini == b) {
            n = n-m;
        } else {
            n--;
        }
        price += mini;
    }

    cout<<price;
    return 0;
}

