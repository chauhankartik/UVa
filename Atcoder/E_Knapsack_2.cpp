#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int n, capacity; cin >> n >> capacity;
        vector<int> w(n+1), v(n+1);
        int maxV = -1;
        for(int i = 1; i <= n; i++) {
                cin >> w[i] >> v[i];
                maxV = max(maxV, v[i]);
        }

        int dp[n+1][maxV+1];
        memset(dp, INT_MAX, sizeof dp);
        

        cout << dp[n][capacity] << endl;
        return 0;
}