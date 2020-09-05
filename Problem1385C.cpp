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
#define vpi vector<pi>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

using namespace std;

int main() {
    int t;
    cin >> t;
    FOR(t, q) {
        int n;
        cin >> n;
        vi nums(n);
        FOR(n, i) {
            cin >> nums[i];
        }
        int m = n;
        for(int i = n-1; i >= 0; i--) {
            int a = 0;
            for(int c = i-1; c >= 0; c--) {
                if(!(nums[c] <= nums[c+1])) {
                    break;
                }
                a++;
            }
            m = min(m, a);
        }
        cout<<m<<'\n';
    }
    return 0;
}

