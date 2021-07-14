#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backTrack(vector<vector<int>>& res, vector<int>& nums, int idx) {
        if(idx >= nums.size()) {
            res.push_back(nums);
            return;
        }

        for(int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);
            backTrack(res, nums, idx + 1);
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 0) return res;  
        backTrack(res, nums, 0);  
    }
};