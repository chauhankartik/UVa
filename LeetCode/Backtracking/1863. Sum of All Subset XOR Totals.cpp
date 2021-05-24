#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int res = 0;
        int ans  = 0;

        void helper(vector<int>& nums, int i) {
                if(i >= nums.size()) {
                        ans += res;
                        return;
                }

                // take nums[i]
                res ^= nums[i];
                helper(nums, i+1);

                // don't take nums[i]
                res ^= nums[i];
                helper(nums, i+1);

        }

        int subsetXORSum(vector<int>& nums) {
                helper(nums , 0);
                return ans;
        }       
};