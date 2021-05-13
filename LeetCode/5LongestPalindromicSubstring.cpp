#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        string longestPalindrome(string s) {
                int res_i = 0, res_j = 0;
                bool dp[s.length()][s.length()];
                memset(dp, false, sizeof dp);
        
                for(int gap = 0; gap < s.length(); gap++) {
                        for(int i = 0 , j = gap; j <s.length() ; i++, j++) {
                                if(gap == 0) {
                                        dp[i][j] = true;
                                        if(i <= j && (j - i) >= res_j - res_i )
                                                res_i = i, res_j = j;
                                } else if(gap == 1) {
                                        if(s[i] == s[j]) {
                                                dp[i][j] = true;
                                                if(i <= j && (j - i) >= res_j - res_i)
                                                        res_i = i, res_j = j;
                                        } else dp[i][j] = false;
                                } else {
                                        if(s[i] == s[j] && dp[i+1][j-1]) {
                                                dp[i][j] = true;
                                                if(i <= j && ((j - i) >= res_j - res_i))
                                                        res_i = i, res_j = j;
                                                
                                        } else {
                                                dp[i][j] = false;
                                        }
                                }
                        }
                }

                string res = "";
                for(int i = res_i; i <= res_j; i++) res += s[i];
                return res;
        }
};

int main() {

        string str; cin >> str;
        Solution o;
        cout << o.longestPalindrome(str) << endl;
        return 0;
}