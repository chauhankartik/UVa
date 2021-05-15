#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int calculateMinimumHP(vector<vector<int>>& dungeon) {
                int m = dungeon.size();
                int n = dungeon[0].size();
                int dp[m][n];
                memset(dp, 0, sizeof dp);

                for(int i = m - 1; i >= 0; i--) {
                        for(int j = n - 1; j >= 0; j--) {
                                if(i == m - 1 && j == n - 1) {
                                        dp[i][j] = dungeon[i][j];
                                }
                                else if(i == m - 1) {
                                        if(dungeon[i][j] >= 0)
                                                dp[i][j] = dungeon[i][j] + dp[i][j+1];
                                        else {
                                                dp[i][j] = dungeon[i][j];
                                                if(dp[i][j+1] < 0)
                                                        dp[i][j] += dp[i][j+1];
                                        }
                                } 
                                else if(j == n - 1) {
                                        if(dungeon[i][j] >= 0)
                                                dp[i][j] = dungeon[i][j] + dp[i+1][j];
                                        else {
                                                dp[i][j] = dungeon[i][j];
                                                if(dp[i+1][j] < 0)
                                                        dp[i][j] += dp[i+1][j];
                                        }
                                } else {
                                        if(dungeon[i][j] >= 0) {
                                                dp[i][j] = dungeon[i][j] + max(dp[i][j+1], dp[i+1][j]);
                                        } else {
                                                dp[i][j] = dungeon[i][j];
                                                int ma = max(dp[i+1][j], dp[i][j+1]);
                                                if(ma < 0)
                                                        dp[i][j] += ma;
                                        }
                                }
                        }
                }
                int res = dp[0][0];
                res = (1 - res);
                return max(res,1);
        }
};

int main() {

        int n, m; cin >> n >> m;
        vector<vector<int>> v(n, vector<int> (m));
        for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                        cin >> v[i][j]; 
                }
        }
        Solution o;
        cout << o.calculateMinimumHP(v) << endl;
        return 0;
}