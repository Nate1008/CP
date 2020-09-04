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
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define pi pair<int, int>
#define f first
#define s second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>


using namespace std;

int main() {
    int t;
    cin >> t;
    for(int q = 0; q < t; q++) {
        double n, k;
        cin >> n >> k;
        int a = ceil(n/k);
        int b = floor(n/k);
        int ansa = 0;
        int ansb = 0;
        int half = ceil(k/2);
        ansb = b-1*half + b+1*half-1;
        ansa = a+1*half + a-1*half-1;
        cout<<ansa<<"\t"<<ansb<<"\n";
        if(a == 1){
            ansa = -1;
        }
        if(b == 1) {
            ansb = -1;
        }

        if(ansa == n) {
            cout<<"YES"<<"\n";       
            for(int i = 0; i < half; i++) {
                cout<<a+1<<" ";
            }
            for(int i = 0; i < half-1; i++) {
                cout<<a-1<<" ";
            }
            cout<<"\n";
            continue;
        } else if (ansb == n) {
            cout<<"YES"<<"\n";       
            for(int i = 0; i < half; i++) {
                cout<<b-1<<" ";
            }
            for(int i = 0; i < half-1; i++) {
                cout<<b+1<<" ";
            }
            cout<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
    return 0;
}

