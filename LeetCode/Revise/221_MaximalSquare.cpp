#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int maximalSquare(vector<vector<char>>& matrix) {
                int m, n;
                m = matrix.size();
                n = matrix[0].size();
                int dp[m+2][n+2];
                memset(dp, 0, sizeof dp);

                int res = 0;

                for(int i = 0; i < m; i++) {
                        for(int j = 0; j < n; j++) {
                                if(i == 0 || j == 0) {
                                        dp[i][j] = matrix[i][j] - '0';
                                        res = max(res, dp[i][j]);
                                }
                                else if(matrix[i][j] == '1') {
                                        dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                                        res = max(res, dp[i][j]);
                                }
                        }
                }
                return res*res;
        }
};

int main() {

        return 0;
}