#include<bits/stdc++.h>
using namespace std;

#define int long long int

// int solve(const vector<int>& v,
//           int                n)
// {
//         int dp[n+1];
//         memset(dp, -1, sizeof dp);
//         dp[0] = 0;

//         for(int i = 1; i <= n; i++) {
//                 for(int j = 0; j < v.size(); j++) {
//                         if(i - v[j] >= 0 && dp[i - v[j]] != -1) {
//                                 if(dp[i] != -1)
//                                         dp[i] = min(dp[i], 1 + dp[i - v[j]]);
//                                 else 
//                                         dp[i] = 1 + dp[i - v[j]];
//                         }
//                 }
//         }
//         return dp[n];
// }

const int N = 10001;
bool dp[N];

int32_t main() 
{       
        int t; cin >> t;
        while(t--) {
                memset(dp, false, sizeof dp);
                dp[0] = true;
                int q, d; cin >> q >> d;
                int mx = d * 10;
                for(int i = 0; 10 * i + d <= mx; i++) {
                        for(int j = 0; 10*i + d + j <= mx; j++) {
                                dp[10 * i + d + j] |= dp[j];
                        }
                }
                while(q--) {
                        int u; cin >> u;
                        if(u >= mx || dp[u])cout << "YES\n";
                        else cout << "NO\n";
                }
        }
        return 0;
}