#include<bits/stdc++.h>
using namespace std;

/*
        n == nums.length
        1 <= n <= 5 * 10**4
       -2**31 <= nums[i] <= 2**31 - 1

        *** O(n) solution exists ***

*/

class Solution {
public:
        int majorityElement(vector<int>& nums) {
                sort(nums.begin(), nums.end()); // O nlgn
                return nums[nums.size()/2];
        }
};

int main() {

}