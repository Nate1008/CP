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
#include <iterator>
#include <functional>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <climits>

#define ll long long
#define mii map<int, int>
#define msi map<string, int>
#define mci map<char, int>
#define pi pair<int, int>
#define f first
#define s second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vpi vector<pi>


using namespace std;

int main() {
    pi a, b;
    cin >> a.f >> a.s >> b.f >> b.s;
    
    int diffv = abs(b.f - a.f);
    int diffh = abs(b.s - a.s);

    if((diffv != 0 && diffh != 0) && diffv != diffh){
        cout<<-1;
    }
    int side = 0;
    if(diffv != 0) {
        side = diffv;
    } else if(diffh != 0) {
        side = diffh;
    }

    pi mi = min(a, b);
    pi ma = max(a, b);
    vpi
    if(mi.f == 0 && mi.s == 0) {

    } 


    return 0;
}

