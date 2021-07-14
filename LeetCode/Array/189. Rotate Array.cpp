#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Time O(n) Space O(1)
    // void rotate(vector<int>& nums, int k) {
    //     if(nums.size() == 0 || k == 0) return;
    //     vector<int> temp(nums);
    //     nums.clear();
    //     k %= temp.size();
    //     for(int i = temp.size() - k; i <= temp.size() - 1; i++) {nums.push_back(temp[i]);}
    //     for(int i = 0; i <= temp.size() - k - 1; i++) {nums.push_back(temp[i]);}
    //     temp.clear();
    //     return; 
    // }


    // Cyclic Replacement Method
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 0 || k == 0) return;

        int n = nums.size();
        k %= nums.size();
        reverse(nums, nums.begin(), nums.begin() + n - k);
        reverse(nums, nums.begin() + n - k + 1, nums.end());
        reverse(nums, nums.begin(), nums.end());
        return; 
    }

    void reverse(vector<int>&nums, vector<int>::iterator a, 
                 vector<int>::iterator b) {
        
        while(a < b) {
            swap(nums[a - nums.begin()], nums[b - nums.begin() - 1]);
            a += 1;
            b -= 1;
        }
    }

};