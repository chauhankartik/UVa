#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int dp[n][n];
        memset(dp, 0, sizeof dp);

        for(int i = n - 1; i >= 0; i--) {
            for(int j = triangle[i].size() - 1; j >= 0; j--) {
                if(i == n - 1) {
                    dp[i][j] = triangle[i][j];
                }else{
                    dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};