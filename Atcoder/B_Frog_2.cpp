#include<bits/stdc++.h>
using namespace std;
#define inf 2e9+100
int main() {

        int n, k;
        cin >> n >> k;
        vector<int> v(n+1);
        for(int i= 1; i <= n; i++) cin >> v[i];
        int dp[n+1];

        memset(dp, inf, sizeof dp);
        dp[n] = 0;

        for(int i = n - 1; i >= 1; i--) {
                for(int j = 1; j <= k; j++) {
                        if(i+j <= n) {
                                dp[i] = min(abs(v[i] - v[i+j]) + dp[i+j], dp[i]);
                        }
                }
        }

        cout << dp[1] << endl;
        return 0;
}