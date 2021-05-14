#include<bits/stdc++.h>
using namespace std;

int dp[501][501];

class Solution {
public:
        int helper(int    i, 
                   int    j, 
                   string& a, 
                   string& b)
        {
                if(i == a.length() || j == b.length()) {
                        return dp[i][j] = max((int)a.length() - i, (int)b.length() - j);
                }

                if(dp[i][j] != -1) return dp[i][j];

                if(a[i] == b[j]) return dp[i][j] = helper(i+1, j+1, a, b);

                int op1= 1 + helper(i, j+1, a, b);// insert
                int op2= 1 + helper(i+1, j, a, b);// delete
                int op3= 1 + helper(i+1, j+1, a, b);// replace

                dp[i][j] = min(op1, min(op2, op3));
                return dp[i][j];
        }

        int minDistance(string a, string b) 
        {       
                memset(dp, -1, sizeof dp);
                return helper(0, 0, a, b);
        }
};

