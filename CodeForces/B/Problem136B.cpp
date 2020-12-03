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

int main() {
    ll n, m;
    cin >> n >> m;
    string a, b;
    if(n == m) {
        cout<<"0";
        return 0;
    }
    while(n != 0) {
        a.append(to_string(n % 3));
        n /= 3;
    }

    while(m != 0) {
        b.append(to_string((m % 3) + 3));
        m /= 3;
    }
    int k = a.length() - b.length();
    if(k > 0) {
        for(int i = 0; i < k; i++) {
            b += "0";
        }
    } else {
        for(int i = 0; i > k; i--) {
            a += "0";
        }
    }
    string c = "";
    for(int i = 0; i < a.length(); i++) {
        int k = (b[i] - 48) - (a[i] - 48);
        if(k < 0) {
            k += 3;
        }
        c.append(to_string(k % 3));
    }
    reverse(c.rbegin(), c.rend());
    cout << stoi(c, nullptr, 3) << "\n";
    return 0;
}