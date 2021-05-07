#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n, sum; cin >> n >> sum;
        vector<int> coins(n+1, 0);
        int mod = 1e9 + 7;
        for(int i = 1; i <= n; i++) cin >> coins[i];

        vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));

        dp[0][0] = 1;

        for(int i = 1; i <= n; i++) {
                for(int j = 0; j <= sum; j++) {
                        dp[i][j] = dp[i - 1][j];
                        if(j - coins[i] >= 0)
                                (dp[i][j] += dp[i][j - coins[i]]) %= mod;
                }
        }

        cout << dp[n][sum];
        return 0;       
}
