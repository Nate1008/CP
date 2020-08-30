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
#define ms map<string, int>
#define mc map<char, int>
#define f first
#define s second
#define vt vector

using namespace std;

int main() {
    string a;
    cin >> a;
    ll perm = 1;
    int n = 0;
    mc letters;
    if((a[0] >= 'a'&& a[0] <= 'z')||(a[0] >= 'A'&& a[0] <= 'Z') || a[0] == '?') {
        perm = 9;
        letters[a[0]] = 9;
        n++;
    }
    for(int i = 1; i < a.length(); i++) {
        if((a[i] >= 'a'&& a[i] <= 'z')||(a[i] >= 'A'&& a[i] <= 'Z')) {
            if(letters[a[i]] != 0) {
                perm *= letters[a[i]];
            } else {
                perm *= n - 10;
                letters[a[i]] = n - 10;
                n++;
            }
        } else if (a[i] == '?') {
            perm *= 10;
        }
    }
    cout<<perm;
    return 0;
}

