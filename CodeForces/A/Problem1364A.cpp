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
        vi sums(n+1);
        int ind = n;
        sums[ind] = 0;
        bool pass = false;
        int sum = 0;
        FOR(n, i) {
            int v;
            cin >> v;
            nums[i] = v;
            if(v % k != 0) {
                pass = true;
            }
            sum += v;
            sums[i] = v;
            if(sums[i] % k != 0) {
                ind = i;
            }
        }
        if(!pass) {
            cout<<-1<<"\n";
            continue;    
        } else if (sum % k != 0) {
            cout<<n<<"\n";
            continue;
        }
        int l = -1;
        int r = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] % k != 0) {
                l = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(nums[i] % k != 0) {
                r = i;
                break;
            }
        }
        int ans = min(l+1, n-r);
        cout<<n-ans<<'\n';
    }
    return 0;
}

