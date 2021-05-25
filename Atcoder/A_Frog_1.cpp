#include<bits/stdc++.h>
using namespace std;

int main() {

        int n; cin >> n;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        int dp[n+1];
        dp[n] = 0;
        dp[n - 1] = abs(v[n-1] - v[n]);

        for(int i = n - 2; i >= 1; i--) {
                int op1 = abs(v[i] - v[i+1]) + dp[i+1];
                int op2 = abs(v[i] - v[i+2]) + dp[i+2];
                dp[i] = min(op1, op2);
        }

        cout << dp[1] << endl;
        return 0;
}