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
using namespace std;

int max(vector<int> planes, int n) {
    int max = 0;
    for(int i = 0; i < n; i++) {
        int k = 0;
        for(int i = 1; i < planes.size(); i++) {
            if(planes[k] < planes[i]) {
                k = i;
            }
        }
        max += planes[k];
        planes[k]--;
    }
    return max;
}


int min(vector<int> planes, int n) {
    int min = 0;
    for(int i = 0; i < n; i++) {
        int k = 0;
        for(int i = 1; i < planes.size(); i++) {
            if(planes[i] != 0 && (planes[k] > planes[i] || planes[k] == 0)) {
                k = i;
            }
        }
        min += planes[k];
        planes[k]--;
    }
    return min;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> planes;
    for(int i = 0; i < m; i++) {
        int t;
        cin >> t;
        planes.push_back(t);
    }

    int maxi = max(planes, n);
    int mini = min(planes, n);
    
    cout << maxi << " " << mini;
    return 0;
}
