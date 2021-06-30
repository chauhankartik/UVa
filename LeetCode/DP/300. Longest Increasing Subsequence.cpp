#include<bits/stdc++.h>
using namespace std;

class Solution {
vector<int> dp;
public:
    int solve(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++) {
            for(int j = 0; j < i; j++) {
                if(nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        return *max_element(dp.begin(), dp.end());
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n, 1);
        return solve(nums);
    }
};