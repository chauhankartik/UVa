#include<bits/stdc++.h>
using namespace std;

/*
    solve 2Sum before this
*/

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int sum = 0;

        unordered_map<int, int> mp;
        mp[0] = 1; // handles when sum == goal
        for(int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            res += mp[sum - goal];
            /*
                Moving these two up and down causes failure when goal = 0
                mp[sum] += 1;
                res += mp[sum - goal];
            */
            mp[sum] += 1;
        }
        return res;
    }
};

// solving with poniters in O(1) space instead of O(N) space

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int low = 0, high = nums.size() - 1;
        int k = low;
        int sum = 0;

        while(true) {
            
        }
        return res;
    }
};