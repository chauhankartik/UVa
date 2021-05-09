#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
#define ok cout << "-----" << endl;

int solve(int n, vector<int> value, vector<int> weight, int capacity) {
        dp[0][0] = 0;
        int val, w;
        for(int i = 1; i <= n; i++) {
                val = value[i-1];
                w = weight[i-1];
                for(int j = 1; j <= capacity ; j++) {
                        if(w <= j)
                                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + val);
                        else 
                                dp[i][j] = dp[i-1][j];
                }
        }
        return dp[n][capacity];
}

int main() {
    int n; cin >> n;
    vector<int> value(n);
    for(auto &c : value) cin >> c;
    
    vector<int> weight(n);
    for(auto &c : weight) cin >> c;
    int capacity; cin >> capacity;
    cout << solve(n, value, weight, capacity) << endl;
    return 0;
}