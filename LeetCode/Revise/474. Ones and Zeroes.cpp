#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        // bounded knapsack
        int findMaxForm(vector<string>& strs, int m, int n) {
                int k = max(m, n);
                int dp[strs.size()+1][k+1];
                memset(dp, 0, sizeof dp);

                // solve
                for(int i = 1; i <= k; i++) {
                        for(int j = 0; j < strs.size(); j++) {
                                string str = strs[j];
                                int temp = stoi(str);
                                while (temp != 0)
                                {
                                        
                                }
                                
                        }
                }
        }
};

int main() {

        return 0;
}