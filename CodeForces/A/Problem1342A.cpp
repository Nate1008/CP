#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        pair<ll, ll> nums;
        pair<ll, ll> amounts;
        cin >> nums.first >> nums.second;
        cin >> amounts.first >> amounts.second;
        ll m = max(nums.first, nums.second);
        ll n = min(nums.first, nums.second);
        ll t = m - n;
        ll ans = t * amounts.first + n * amounts.second;
        ll other = (n + m) * amounts.first;
        cout << min(ans, other) << "\n"; 
    } 
    return 0;
}