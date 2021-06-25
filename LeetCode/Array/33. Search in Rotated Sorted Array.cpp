#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchPivot(vector<int>& nums, int lo, int hi) {
        int mx = nums[0];
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] >= mx) {
                if(nums[mid+1]<nums[mid])
                    return mid;
                lo = mid + 1;
            }
            else {
                if(nums[mid] < mx) {
                    if(nums[mid-1]>nums[mid])
                        return mid-1;
                    hi = mid-1;
                }
            }
        }
        return 0;
    }

    int search(vector<int>& nums, int target) {
        int pivot = searchPivot(nums, 0, nums.size()-1);
        int low = 0, high = nums.size() -1;
        if(target <= nums[pivot] && target >= nums[0]) {
            high = pivot;
        }
        else {
            low = pivot + 1;
        }

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target = nums[mid]) return mid;
            if(target > nums[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};