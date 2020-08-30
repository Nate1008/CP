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
    sizes.push_back("S");
    sizes.push_back("M");
    sizes.push_back("L");
    sizes.push_back("XL");
    sizes.push_back("XXL");
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
            if(si[b] != 0) {
                int d = b - k;
                cout<<d<<"\n";
                dist.push_back(d);
            }
        }
        int mini = 0;
        for(int b = 0; b < dist.size(); b++) {
            //cout<<b<<"\t"<<dist[b]<<"\n";
            if(abs(dist[b]) < abs(dist[mini])) {
                mini = b;
            }
        }
        //si[mini]--;
        cout<<si[mini]<<"\n";
        cout<<sizes[mini]<<"\n";
    }
    return 0;
}

