#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

        int findMaxForm(vector<string>& strs, int m, int n) {
                int dp[strs.size()+ 1];
                memset(dp, 0, sizeof dp);
                
                for(int i = 0; i < strs.size(); i++) {
                        int one = 0, zero = 0;
                        for(int j = i; one < n and zero < m and j < strs.size(); j++) {
                                int cur = stoi(strs[j]);
                                while(cur != 0) {
                                        int k = cur % 10;
                                        cur /= 10;
                                        if(k == 0) {
                                                zero += 1;
                                        } else {
                                                one += 1;
                                        }
                                }
                                if(zero <=m && one <= n) dp[i] += 1;
                        }
                }
                for(auto c : dp) cout << c << " " ;
                cout << endl;
                return *max_element(dp, dp + strs.size());
        }
};

int main() {

        Solution o;
        vector<string> v;
        int m, n;
        string s; while(cin >> s) v.push_back(s);

        return 0;
}