#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        // bounded knapsack
        pair<int, int> count(string s)  
        {
                int z = 0, o = 0;
                for(auto c : s) {
                        if(c == '1') o += 1;
                }
                z = s.length() - o;
                return pair<int, int>({z, o});
        }

        int findMaxForm(vector<string>& strs, int m, int n) {   
                int l = strs.size();
                // m - 0
                // n - 1
                int dp[l+1][m+1][n+1];
                memset(dp, 0, sizeof dp);

                for(int i = 1; i <= l; i++) {
                        for(int j = 0 ; j <= m; j++) {
                                for(int k = 0; k <= n; k++) {
                                        pair<int, int> p = count(strs[i - 1]);
                                        if(p.first <= j && p.second <= k) {
                                                dp[i][j][k] = max(dp[i-1][j][k], 1 + dp[i - 1][j - p.first][k - p.second]);
                                        }
                                        dp[i][j][k] = min(dp[i-1][j][k], dp[i][j][k]);
                                }
                        }
                }

                return dp[l][m][n];
        }
};
