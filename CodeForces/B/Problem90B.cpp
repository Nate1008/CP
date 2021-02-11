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
    int n, m;
    cin >> n >> m;
    vt<string> board;
    string ans = "";
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        board.push_back(temp);
    }
    
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < m; k++) {
            char t = board[i][k];
            bool c = false;
            for(int j = 0; j < m; j++) {
                if(board[i][j] == t && j != k) {
                    c = true;
                }
            }
            for(int j = 0; j < n; j++) {
                if(board[j][k] == t && j != i) {
                    c = true;
                }
            }
            if(c){
                continue;
            }
            ans += t;
        }
    }
    std::cout<<ans;
    return 0;
}

