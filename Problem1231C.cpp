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
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define pi pair<int, int>
#define f first
#define s second
#define vt vector
#define vi vector<int>

using namespace std;

int main() {
    int n, m, sum;
    cin >> n >> m;
    int mat[n][m];
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < m; k++) {
            cin >> mat[i][k];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < m; k++) {
            if(mat[i][k] == 0) {
                mat[i][k] = min(mat[i+1][k]-1, mat[i][k+1]-1);
            }

            int diffv = mat[i+1][k] - mat[i-1][k];
            int diffh = mat[i][k+1] - mat[i][k-1];
            cout<<diffh<<"\t"<<diffv;
            if(diffv <= 1 || diffh <= 1) {
                cout<<-1;
                return 0;
            }
            sum += mat[i][k];
        }
    }
    return 0;
}

