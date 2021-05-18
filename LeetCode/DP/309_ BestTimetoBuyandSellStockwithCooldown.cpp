#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
        int dp[6000][2];
public:
        int helper(int          pos,
                   bool         own,
                   vector<int>& prices)
        {
                if(pos >= prices.size()) return 0;
                
                if(dp[pos][own] != -1) return dp[pos][own];

                if(own) {
                        int op1 = prices[pos] + helper(pos+2, !own, prices); // sold
                        int op2 = helper(pos+1, own, prices); // hold
                        return dp[pos][own] = max(op1, op2);
                }
                else {
                        int op1 = -(prices[pos]) + helper(pos+1, !own, prices); // buy
                        int op2 =  helper(pos+1, own, prices);
                        return dp[pos][own] = max(op1, op2);
                }
        }
        
        int maxProfit(vector<int>& prices) 
        {
                memset(dp, -1, sizeof dp);
                return helper(0, 0, prices);      
        }
};

int main() {
        Solution obj; 
        vector<int> p; int n;
        while(cin >> n) p.push_back(n);
        cout << obj.maxProfit(p) << endl;
        return 0;
}