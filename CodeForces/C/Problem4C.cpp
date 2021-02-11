#include <iostream>
#include <cstdio>
#include <cmath>
#include <numeric>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    map<string,int> users;
    for(int i = 0; i < t; i++) {
        string user;
        cin >> user;
        if (users[user] >= 1){
            users[user]++;
        } else {
            users[user] = 1;
        }
        if(users[user] == 1){
                cout<<"OK" << "\n";
        } else {
                cout<<user<<users[user]-1<<"\n";
        }
    }
    return 0;
}
