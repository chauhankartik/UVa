#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool dp[10001][101];

        bool helper(string& s,
                   string& t,
                   int     i,
                   int     j)
        {
                if(j == s.length()) return true;
                if(i == t.length()) return false;

                if(dp[i][j]!= false) return true;

                if(t[i] == s[j]) return dp[i][j] = helper(s, t, i+1, j+1);
                else return dp[i][j] = helper(s, t, i+1, j);
        }

        bool isSubsequence(string s, string t) {
                memset(dp, false, sizeof dp);
                return helper(s, t, 0, 0);
        }
};