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
#define vt vector

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int ans = 0;
    if(a % 2 == 0){
        ans=((n-a)/2)+1;
    } else {
        ans=(a+1)/2;
    }
    cout<<ans;
    return 0;
}

