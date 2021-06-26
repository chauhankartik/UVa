#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        // find pivot
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]) low = mid + 1;
            else high = mid;
        }
        int root = low;
        low = 0;high = nums.size() - 1;

        if(target >= nums[root] && target <= nums[high])
            low = root;
        else 
            high = root;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) return mid;
            if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};