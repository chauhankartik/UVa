#include<bits/stdc++.h>
using namespace std;

int main() {
        int n, b;
        cin >> n >> b;
        vector<int> cost(n+1, 0), pages(n+1, 0);
        for(int i=1;i<=n;i++)cin >>  cost[i];
        for(int i=1;i<=n;i++)cin >> pages[i];

        vector<vector<int>> dp(n+1, vector<int>(b+1, 0));
        
        for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= b; j++) {
                        dp[i][j] = dp[i-1][j];
                        if(j - cost[i] >= 0) {
                                dp[i][j] = max(dp[i-1][j], pages[i] + dp[i-1][j - cost[i]]);
                        }
                }
        }
        cout << dp[n][b] << endl;
        return 0;
}
