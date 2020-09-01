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
    for(int q = 0; q < n; q++) {
        int k;
        cin >> k;
        vi maxs(1);
        maxs[0] = 0;
        int m = 0;
        for(int i = 1; i < k+1; i++) {
            int t;
            cin >> t;
            cout<<t<<"\n";
            if((t > 0 && maxs[m] > 0) || (t < 0 && maxs[m] < 0)) {
                cout<<maxs[m]<<"\n";
                maxs[m] = max(maxs[m], t);
                cout<<maxs[m]<<"\n";
            } else {
                cout<<maxs[m]<<"\n";
                maxs.push_back(t);
                m = i;
                cout<<maxs[m]<<"\n";
            }
        }
        int sum = 0;
        for(int i = 1; i < maxs.size(); i++) {
            sum += maxs[i];
        }
        cout<<sum<<'\n';
    }
    return 0;
}

