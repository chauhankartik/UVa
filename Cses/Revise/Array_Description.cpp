/*
        Revise
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

        int n, m; cin >> n >> m;
        int mod = 1e9+7;
        vector<int> vec(n+1, 0);
        for(int i = 1; i <= n; i++) cin >> vec[i];

        vector<vector<int>> dp(n+2, vector<int>(m+2, 0));

        /*
                dp[i][j] : valid arrays till ith pos ending at j
        */
        
        for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= m; j++) {
                        if(i==1)
                        {
                                if(vec[i] == 0 || vec[i] == j)
                                        dp[i][j] = 1;
                                else dp[i][j] = 0;
                        } else 
                        {
                                if(vec[i] == 0 || vec[i] == j)
                                        dp[i][j] = ((dp[i-1][j-1]+ dp[i-1][j])%mod + dp[i-1][j+1])%mod;
                                else 
                                        dp[i][j] = 0;
                        }
                }
        }

        int ans = 0;
        for(int i = 1; i <= m; i++)
                (ans += dp[n][i]) %= mod;

        cout << ans << endl;
        return 0;
}