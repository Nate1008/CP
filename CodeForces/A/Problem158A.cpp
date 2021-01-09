#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<int> scores;
    int n, k;
    int ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int score;
        cin >> score;
        scores.push_back(score);
    }

    for(int i=0; i < scores.size(); i++){
        if(scores[i] >= scores[k-1] && scores[i] > 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}