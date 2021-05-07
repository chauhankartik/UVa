#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int n; cin >> n;
        int dp[n+1];
        memset(dp, 0, sizeof dp);
        int mod = 1e9+7;
        dp[0] = 1;

        for(int i = 1; i <= n; i++) {
                 /*
                        dp [i] -> Number of ways to sum up to i using (1-6) 
                        typical coin change problem
                 */
                for(int j = 1; j <= 6 && i-j>=0; j++) {
                        dp[i] = (dp[i] + dp[i - j])%mod;
                }
        }
        cout << dp[n] << endl;
        return 0;
}