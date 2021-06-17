#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res = 0;
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] <= nums[i - 1]) {
                int gap = abs(nums[i] - nums[i - 1]);
                nums[i] = nums[i] + gap + 1;
                res += (gap + 1);
            }
        } 
        return res;       
    }
};