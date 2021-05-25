#include<bits/stdc++.h>
using namespace std;

// goldmine

int main() {

        int n; cin >> n;
        vector<tuple<int, int, int>> vec(n+1);
        for(int i = 1; i <= n; i++) {
                int a,b,c;
                cin >> a >> b >> c;
                vec[i] = make_tuple(a,b,c);
        }

        int dp[4][n+1];
        memset(dp, 0, sizeof dp);

        dp[1][n] = get<0>(vec[n]);
        dp[2][n] = get<1>(vec[n]);
        dp[3][n] = get<2>(vec[n]);

        for(int j = n - 1; j >= 1; j--) {
                dp[1][j] = get<0>(vec[j]) + max(dp[2][j+1], dp[3][j+1]);
                dp[2][j] = get<1>(vec[j]) + max(dp[1][j+1], dp[3][j+1]);
                dp[3][j] = get<2>(vec[j]) + max(dp[1][j+1], dp[2][j+1]);
        }

        int res = -1;
        for(int i = 1; i <= 3; i++) {
                res = max(res, dp[i][1]);
        }
        cout << res << endl;
        return 0;
}