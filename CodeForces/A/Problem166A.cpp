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
#define f first
#define s second

using namespace std;

bool greaterPI(pi a, pi b) {
    if(a.f > b.f) {
        return true;
    } else if (a.f < b.f){
        return false;
    } else {
        if (a.s < b.s) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cout<<"\n";
    vector<pi> scores;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pi t = pi(a, b);
        scores.push_back(t);
    }
    sort(scores.begin(), scores.end(), greaterPI);
    pi kth = scores[k-1];
    int teams = 0;
    for(int i = 0; i < n; i++) {
        pi t = scores[i];
        if(kth == t) {
            teams++;
        }
    }
    cout<<teams;
    return 0;
}
