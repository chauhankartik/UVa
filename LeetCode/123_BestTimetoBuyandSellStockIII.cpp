#include<bits/stdc++.h>
using namespace std;

/*
        dp[100005];

*/

class Solution {
        int dp[100005][2][5]; // dp[days][own][k]
public:
        int helper(vector<int>& prices,
                   int          own   ,
                   int          k     )
        {
                int n = prices.size();
                for(int i = n - 1; i >= 0; i--) {
                        for(int trans = 0; trans <= k; trans++) {
                                if(i == n - 1){
                                        dp[i][0][trans] = 0;
                                        dp[i][1][trans] = (trans >= 1) ? prices[i] : 0;
                                }
                                else{
                                        dp[i][0][trans] = max(-prices[i]+dp[i+1][1][trans], dp[i+1][0][trans]);
                                        dp[i][1][trans] = max((trans >= 1) ? prices[i] + dp[i+1][0][trans-1] : 0, dp[i+1][1][trans]);
                                }
                        }
                }
                return dp[0][0][k];
        }

        int maxProfit(vector<int>& prices) 
        {
                memset(dp, 0, sizeof dp);
                return helper(prices, 0, 2);
        }
};

int main() {
        Solution obj;
        vector<int> p; int n;
        while (cin>>n)
        {
                p.push_back(n);
        }
        cout << obj.maxProfit(p) << endl;
        return 0;
}