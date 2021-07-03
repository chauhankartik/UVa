#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0) return -1;

        int n = nums.size();
        int total_sum = 0, left_sum = 0;
        int res = 0;

        for(const auto& c : nums) total_sum += c;
        for(const auto& c : nums) {
            if(left_sum == total_sum - left_sum - c) return res;
            left_sum += c;
            ++res;
        }

        return -1;
    }
};