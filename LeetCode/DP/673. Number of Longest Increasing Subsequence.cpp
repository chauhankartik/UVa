#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1), cnt(n, 1);
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; ++j) {
                if(nums[i] > nums[j]) {
                    if(dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        cnt[i] = cnt[j];
                    } else if(dp[i] == 1 + dp[j]) {
                        cnt[i] += cnt[j];
                        // fail on cnt[i] = 1 + cnt[j]
                    }
                }
            }
        }
        int el = *max_element(dp.begin(), dp.end());
        int res = 0;
        for(int i = 0; i < dp.size(); ++i) {
            if(dp[i] == el) res += cnt[i];
        }    
        return res;
    }
};