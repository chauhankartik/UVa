#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int coinChange(vector<int>& coins, int amount) {
                
                int dp[amount+1];
                memset(dp, -1, sizeof dp);

                dp[0] = 0;

                for(int i = 1; i <= amount; i++) {
                        for(int j = 0; j < coins.size(); j++) {
                                if(i -  coins[j] >= 0 and dp[i - coins[j]] != -1) {
                                        if(dp[i] == -1)
                                                dp[i] = 1 + dp[i - coins[j]];
                                        else
                                                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                                }
                        }
                }
                return dp[amount];
        }
};

int main() {

        return 0;
}