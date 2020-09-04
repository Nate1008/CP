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
    
    int diffv = (b.f - a.f);
    int diffh = (b.s - a.s);

    if((diffv != 0 && diffh != 0) && abs(diffv) != abs(diffh)){
        cout<<-1;
        return 0;
    }
    // cout<<side<<'\n';
    if(a.f == b.f) {
        pi t = pi(a.f+diffh,a.s);            
        cout<<t.f<<" "<<t.s<<" ";
        t = pi(b.f+diffh,b.s);
        cout<<t.f<<" "<<t.s<<" ";
    } else if(a.s == b.s) {
        pi t = pi(a.f,a.s+diffv);            
        cout<<t.f<<" "<<t.s<<" ";
        t = pi(b.f,b.s+diffv);
        cout<<t.f<<" "<<t.s<<" ";
    } else {
        pi t = pi(a.f+diffh,a.s+diffv);            
        cout<<t.f<<" "<<t.s<<" ";
        t = pi(b.f+diffh,b.s+diffv);
        cout<<t.f<<" "<<t.s<<" ";
    }
}

