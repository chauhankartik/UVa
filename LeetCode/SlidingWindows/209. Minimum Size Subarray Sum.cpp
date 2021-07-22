#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> collected_sum;
        for(int r = 0; r < nums.size(); r++) {
            if(collected_sum.find(nums[r]) != collected_sum.end()) {
                res = min(res, r - collected_sum[nums[r]]);
            }
        }
    }
};