#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int total = 0;
        for(auto c : nums) total += c;
        vector<int> res;
        int s = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size(); ++i) {
            total -= nums[i];
            res.push_back(nums[i]);
            s += nums[i];
            if(s > total) break;
        }
        return res;
    }
};