#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int low = 0;
        int high = nums.size() - 1;
        int sidx = -1, eidx = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                sidx = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size() - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                eidx = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else { high = mid - 1;}
        }
        res.push_back(sidx);
        res.push_back(eidx);
        return res;
    }
};