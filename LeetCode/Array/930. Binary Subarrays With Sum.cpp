#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; ++i) {
            prefix[i] = nums[i] + prefix[i-1];
        }

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(prefix[j] - prefix[i] == goal) res += 1;
            }
        }
        return res;
    }
};