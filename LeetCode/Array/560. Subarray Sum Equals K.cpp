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
        int n = nums.size();
        vector<int> pre(n+1, 0);
        pre[0] = 0;

        int res = 0;
        for(int i = 0; i < n; i++) {
            pre[i+1] = pre[i] + nums[i];
            if(nums[i] == k) res += 1;
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < i; i++) {
                if(pre[i] - pre[j] == k) res += 1;
            }
        }

        if(nums[1] == k) res -= 1;

        return res;
    }
};