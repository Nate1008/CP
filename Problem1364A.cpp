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

#define TC int t; cin >> t; FOR(t, q)


using namespace std;

int main() {
    TC {
        int n, k;
        cin >> n >> k;
        vi nums(n);
        FOR(n, i) {
            cin >> nums[i];
        }
        int m = 0;
        int curm = 0;
        int c = 0;
        int l = -1;
        FOR(n, i) {
            curm = max(nums[i], curm + nums[i]);
            cout<<"CURRENT MAX: "<<curm<<"\n"; 
            if(curm % k != 0) {
                m = max(curm, m);
                cout<<"MAX: "<<m<<"\n"; 
                c++;
                l = max(l, c);
            } else {
                c = 0;
            }
        }
        cout<<m<<'\n';
    }
    return 0;
}

