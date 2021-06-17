#include<bits/stdc++.h>
using namespace std;

int dp[1001];

class Solution {
public:
    bool solve(int n) {
        if(n < 2)
            return false;
        else if(n == 2) {
            return true;
        }
        else if(dp[n] != -1)
            return true;
        else {
            for(int i = 1; i < n; ++i) {
                if(n % i == 0) {
                    if(!solve(n - i)) {
                        dp[n] = 1;
                        return dp[n];
                    }
                }
            }
        }
        return false;
    }

    bool divisorGame(int n) {
        memset(dp, -1, sizeof dp);
        return solve(n);
    }
};