#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
        int dp[50001][2];
public:
        int helper(int          pos,
                   bool         own,
                   const int    fee,
                   vector<int>& prices)
        {
                if(pos == prices.size()) return 0;

                if(dp[pos][own] != -1)
                        return dp[pos][own];

                if(own) {
                        int op1 = prices[pos] + helper((pos+1), !own, fee, prices);  // sell
                        int op2 = helper(pos+1, own, fee, prices);
                        return dp[pos][own] = max(op1, op2);
                }  
                else {
                        int op1 = (-(prices[pos] + fee)) + helper(pos+1, !own, fee, prices); // buy
                        int op2 = helper(pos+1, own, fee, prices);
                        return dp[pos][own] = max(op1, op2);
                }
        }

        int maxProfit(vector<int>& prices, 
                      int          fee) 
        {
                if(prices.empty()) return 0;
                memset(dp, -1, sizeof dp);
                return helper(0, 0, fee, prices);
        }
};

int main() {

        Solution obj;
        int n, fee;
        vector<int> p;
        while(cin >> n) p.push_back(n);
        fee = p[p.size() - 1]; p.pop_back();
        cout << obj.maxProfit(p, fee);
        return 0;
}