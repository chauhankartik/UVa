#include<bits/stdc++.h>
using namespace std;

int dp[105][105];

int main() {
        int t; cin >> t;
        while(t--)
        {
                memset(dp, 0, sizeof dp);
                int h, w; cin >> h >> w;
                vector<vector<int>> floor(h+1, vector<int> (w+1, 0));

                for(int i = 1; i <= h; i++) {
                        for(int j = 1; j <= w; j++) {
                                cin >> floor[i][j];
                        }
                }

                for(int j = 1; j <= w; j++) dp[h][j] = floor[h][j];

                for(int i = h - 1; i >= 1; i--) {
                        for(int j = w; j >= 1; j--) {
                                if(j == w) {
                                        dp[i][j] = floor[i][j] + max(dp[i+1][j], dp[i+1][j-1]);
                                } else if(j == 1) {     
                                        dp[i][j] = floor[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
                                } else {
                                        dp[i][j] = floor[i][j] + max(dp[i+1][j-1], max(dp[i+1][j], dp[i+1][j+1]));
                                }
                        }
                }

                int ans = -1;

                for(int j = 1; j <= w; j++) ans = max(ans, dp[1][j]);

                cout << ans << endl;
        }
        return 0;
}