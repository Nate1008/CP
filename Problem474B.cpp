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
    int n;
    cin >> n;
    vi piles(n);
    for(int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    int k;
    cin >> k;
    vi best(k);
    for(int i = 0; i < k; i++) {
        cin >> best[i];
    }

    for(int i = 0; i < n; i++) {
        piles[i] += piles[i-1];
    }

    for(int i = 0; i < k; i++) {
        for(int x = 0; x < n; x++) {
            if(best[i] <= piles[x] && best[i] >= piles[i-1]) {
                cout<<x<<"\n";
            }
        }
    }
    return 0;
}

