#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int dp[m+1][n+1];
        memset(dp, 0, sizeof dp);

        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(i == 0 || j == 0) {
                    if(matrix[i][j] - '0') {
                        dp[i][j] = 1;
                        res = max(res, dp[i][j]);
                    }
                }
                else {
                    if(matrix[i][j] - '0') {
                        dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));
                        res = max(res, dp[i][j]);
                    }
                }
            }
        }
        return res*res;
    }
};