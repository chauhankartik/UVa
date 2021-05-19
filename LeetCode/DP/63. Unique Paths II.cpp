#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int uniquePathsWithObstacles(vector<vector<int>>& obs) {
                int m = obs.size();
                int n = obs[0].size();

                int dp[m][n];

                if(obs[m-1][n-1] == 0)
                        dp[m - 1][n - 1] = 1;
                else 
                        return dp[m - 1][n - 1] = 0;

                for(int i = m - 1; i >= 0; i--) {
                        for(int j = n - 1; j >= 0; j--) {
                                if(i == m - 1) {
                                        if(obs[i][j] == 0)
                                                dp[i][j] = 1;
                                        else 
                                                dp[i][j] = 0;
                                } 
                                else if(j == n - 1) {
                                        if(obs[i][j] == 0) {
                                                dp[i][j] = 1;
                                        }
                                        else 
                                                dp[i][j] = 0
                                }
                        }
                }
        }
};


int main() {

        return 0;
}