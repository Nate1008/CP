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
    int n;
    cin >> n;
    cout<<n;
    vi b(n);
    int first = n+1;
    int last = -1;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t==0 && i < first) {
            first = i;
        }
        if(t==0 && i > last) {
            last = i;
        }
        b.push_back(t);
        cout<<first<<" "<<last<<"\n";
    }
    cout<<"INPUT";
    vi::iterator k = b.begin() - first;
    vi::iterator l = b.begin() - last;
    int z = count(k, l, 0);
    int o = count(k, l, 1);    
    int ans = z - o;
    if(ans < 0) ans = 0;  
    cout<<ans;
    return 0;
}

