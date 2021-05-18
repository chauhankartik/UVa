#include<bits/stdc++.h>
using namespace std;

class Solution {
        int dp[1001];
public:
        int solve(int dp[],
                  int    n) 
        {
                if(n <= 1) return dp[n] = n;
                
                if(dp[n] != INT_MAX)
                        return dp[n];

                int ans = min(solve(dp, n - 1), solve(dp, ))

        }

        int minSteps(int n) {
                memset(dp, INT_MAX, sizeof dp);   
        }
};

int main() {
        

        return 0;
}