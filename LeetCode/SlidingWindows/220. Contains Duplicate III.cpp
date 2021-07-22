#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        unordered_map<int, int> seen;
        for(int r = 0; r < nums.size(); r++) {
            if(seen.find(nums[r]) != seen.end() && r - seen[nums[r]] <= k) return true;
            seen[nums[r] + t] = r;
        }
        return false;
    }
};