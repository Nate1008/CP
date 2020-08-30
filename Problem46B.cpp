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
#define pi pair<int, int>
#define mi map<int, int>
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    vt<string> sizes;
    sizes = {"S", "M", "L", "XL", "XXL"} ;
    vt<string>::iterator it;
    map<int, int> si;
    for(int i = 0; i < 5; i++) {
        cin >> si[i];
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        it = find(sizes.begin(), sizes.end(), a);
        int k = distance(sizes.begin(), it);
        vt<int> dist;
        for(int b = 0; b < 5; b++) {
            if(si[b] == 0) {
                continue;
            }
            int d = b - k;
            dist.push_back(d);
        }

        int maxi = 0;
        for(int b = 0; b < dist.size(); b++) {
            if(abs(dist[b]) >= abs(dist[maxi])) {
                maxi = b;
            }
        }
        cout<<sizes[maxi]<<"\n";
    }
    return 0;
}

