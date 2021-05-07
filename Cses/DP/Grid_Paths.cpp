#include<bits/stdc++.h>
using namespace std;

int main() {

        int n; cin >> n;
        vector<vector<char>> grid(n, vector<char>(n));
        int mod = 1e9 + 7;

        for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                        cin >> grid[i][j];
                }
        }


        vector<vector<int>> dp(n, vector<int>(n, -1));

        if(grid[n - 1][n - 1] == '*') {
                cout << 0 << endl;
                return 0;
        }

        for(int i = n - 1; i >= 0; i--) {
                int j = n - 1;
                if(grid[i][j] != '*') {
                        dp[i][j] = 1;
                }
                else {
                        break;
                }
        }

        for(int i = n - 1; i >= 0; i--) {
                for(int j = n - 2; j >= 0; j--) {
                        if(i == n - 1) {
                                if(grid[i][j] != '*') {
                                        dp[i][j] = 1;
                                }
                                else{
                                        break;
                                }
                        } else {
                                int right = (dp[i][j+1] != -1) ? dp[i][j+1] : 0;
                                int down  = (dp[i+1][j] != -1) ? dp[i+1][j] : 0;
                                dp[i][j]  = ((grid[i][j] != '*') ? right + down : -1)%mod;
                        }
                }
        }

        cout << max(dp[0][0], 0) << endl;

        return 0;
}