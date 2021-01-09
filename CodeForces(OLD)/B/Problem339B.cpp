#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

int loop(int cur, int tar, int n) {
    cur %= n;
    long long dis = tar + n;
    dis -= cur;
    dis %= n;
    return dis;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ring;
    for(int i = 0; i < m; i++) {
        int t;
        cin >> t;
        ring.push_back(t);
    }
    long long dis = 0;
    int cur = 1;
    for(int i = 0; i < m; i++) {
        dis += loop(cur, ring[i], n);
        cur = ring[i];
    }
    cout << dis;
    return 0;
}