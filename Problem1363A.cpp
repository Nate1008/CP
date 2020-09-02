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
        int n, k;
        cin >> n >> k;
        int odd = 0;
        int even = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        if(odd == 0) {
            cout<<"NO"<<"\n";
            continue;
        }

        k--;
        odd--;
        
        if(odd % 2 == k % 2) {
            cout<<"YES"<<"\n";
            continue;
        }
        /*if((k % 2 == 0) && (even >= k || odd >= k)) {
            cout<<"YES"<<"\n";
            continue;
        } else if (even >= k) {
            cout<<"YES"<<"\n";
            continue;
        }*/
        cout<<"NO"<<"\n";

    }
    return 0;
}

