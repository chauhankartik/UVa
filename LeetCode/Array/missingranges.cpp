/**
 * Given a sorted integer array where the range of elements are in the inclusive range [lower, upper], return its missing ranges.
 * For example, given [0, 1, 3, 50, 75], lower = 0 and upper = 99, return ["2", "4->49", "51->74", "76->99"].
 *
 * Time complexity O(n)
 *
 * https://leetcode.com/problems/missing-ranges/
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> res;
        for(int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            if(curr > lower) {
                string s = "";
                s += to_string(lower);
                s += "-"
                while(lower < )
            }
        }
    }
};