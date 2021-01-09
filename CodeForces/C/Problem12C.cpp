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
#define p pair
#define f first
#define s second
#define vt vector

using namespace std;

bool greaterP(p<string, int> a, p<string, int> b) {
    if(a.s > b.s) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vt<int> prices;
    vt<p<string, int> > items;
    vt<string> names;
    vt<string> :: iterator it;
    for(int i= 0; i < n; i++) {
        int t;
        cin >> t;
        prices.push_back(t);
    }
    for(int i = 0; i < m; i++) {
        string t;
        cin >> t;
        if(count(names.begin(), names.end(), t) > 0) {
            it = find(names.begin(), names.end(), t);
            int index = distance(names.begin(), it);
            items.at(index).s++;
        } else {
            items.push_back(p<string, int>(t, 1));
            names.push_back(t);
        }
    }
    vt<int> ma = prices;
    vt<int> mi = prices;

    sort(ma.begin(), ma.end(), greater<int>());
    sort(mi.begin(), mi.end());
    sort(items.begin(), items.end(), greaterP);

    int min = 0;
    for(int i = 0; i < items.size(); i++) {
        min+=mi[i]*items[i].s;
    }
    cout<<min<<" ";

    int max = 0;
    for(int i = 0; i < items.size(); i++) {
        max+=ma[i]*items[i].s;
    }
    cout<<max;
    return 0;
}

