#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
            [1,1,1] k = 2;
            res = 2

            [1,2,3] k = 3
            res = 2
        */

       unordered_map<int, int> seen = {{0, 1}};
       int res = 0, sum = 0;
       for(const auto&c : nums) {
           sum += c;
           res += seen[sum - k];
           seen[sum] += 1;
       }

       return res;
    }
};