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
        int a = floor(n/k);
        int b = ceil(n/k);
        if(a == b) {
            int x = n/k;
            cout<<"YES"<<"\n";
            for(int i = 0; i < k; i++) {
                cout<<x<<" ";
            }
            cout<<"\n";
            continue;
        }
        cout<<a<<"\t"<<b<<"\n";
        int half = ceil(k/2);
        bool pass = false;
        for(int v = 1; v < k; v++){
            cout<<"V: "<<v<<'\n';
            int ansb = ((b-1)*v) + ((b+1)*(k-v));
            int ansa = ((a+1)*v) + ((a-1)*(k-v));
            if(a <= 1){
                ansa = -1;
            }
            if(b <= 1) {
                ansb = -1;
            }
            cout<<ansa<<"\t"<<ansb<<"\n";
            if(ansa == n) {
                cout<<"YES"<<"\n";       
                for(int i = 0; i < v; i++) {
                    cout<<a+1<<" ";
                }
                for(int i = 0; i < k-v; i++) {
                    cout<<a-1<<" ";
                }
                cout<<"\n";
                pass = true;
                break;
            } else if (ansb == n) {
                cout<<"YES"<<"\n";       
                for(int i = 0; i < v; i++) {
                    cout<<b-1<<" ";
                }
                for(int i = 0; i < k-v; i++) {
                    cout<<b+1<<" ";
                }
                cout<<"\n";
                pass = true;
                break;
            }
        }
        if(!pass){
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}

