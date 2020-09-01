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
    vi piles(n+1);
    piles[0] = 0;
    for(int i = 1; i < n+1; i++) {
        int t;
        cin >> t;
        t += piles[i-1];
        piles[i] = t;
    }
    int k;
    cin >> k;
    vi best(k);
    for(int i = 0; i < k; i++) {
        cin >> best[i];
    }

    for(int i = 1; i < n+1; i++) {
        piles[i] += piles[i-1];
    }
    for(int i = 0; i < k; i++) {
        for(int x = 1; x < n+1; x++) {
            if(best[i] <= piles[x] && best[i] > piles[x-1]) {
                cout<<x+1<<"\n";
            }
        }
    }
    return 0;
}

