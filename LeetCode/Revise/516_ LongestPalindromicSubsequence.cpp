#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

/*
        LPS(str) depends on set_of_Subseq(str)
        str = amb
        s(str) = s(m) + as(m) + s(m)b + as(m)b
        if(a == b)
                ans in as(m)b
                and ans = 2 + LPS(m)
        else 
                ans in s(m) + as(m) + s(m)b
                ans = max(LPS(m), LPS(as(m)), LPS(s(m)b)

*/

        int dp[1001][1001];

        int helper(string& s, int i, int j)
        {
                if(i == s.length())
                        return 0;
                if(j == -1)
                        return 0;

                if(dp[i][j] != - 1)
                        return dp[i][j];


                if(s[i] == s[j]) {
                        return dp[i][j] = ((i == j) ? 1 : 2) + helper(s, i+1, j-1);
                }
                else {
                        return dp[i][j] = max(helper(s, i+1, j), helper(s, i, j-1));
                }
        }

        int longestPalindromeSubseq(string s) 
        {
                memset(dp, -1, sizeof dp);
                for(int g = 0; g < s.length(); g++) {
                        for(int k = 0, l = g; l < s.length(); k++, l++) {
                                if(g == 0) {
                                        dp[k][l] = 0;
                                }
                        }
                }
                helper(s, 0, s.length()-1);
                int res = -1;
                for(int i = 0; i < (int)s.length(); i++) {
                        for(int j = 0; j < (int)s.length(); j++) {
                                res = max(dp[i][j], res);
                        }
                }
                return res;
        }
};

int main() {
        return 0;
}