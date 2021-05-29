#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int num_items, capacity; cin >> num_items >> capacity;
        int n = num_items;
        vector<int> w(n+1), v(n+1);
        for(int i = 1; i <= n; i++) {
                cin >> w[i] >> v[i];
        }

        int dp[num_items+1][capacity+1];
        memset(dp, 0,sizeof dp);

        for(int i = 1; i <= n; i++) {
                int weight = w[i];
                for(int j = 1; j <= capacity; j++) {
                        if(weight <= j) {
                                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight] + v[i]);
                        }
                        else {
                                dp[i][j] = dp[i-1][j];
                        }
                }
        }

        cout << dp[n][capacity] << endl;
        return 0;
}