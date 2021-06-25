#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res = -1;
        vector<int> visited(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {
            int cnt = 0;
            if(!visited[i]) {
                int start = nums[i];
                visited[start] = 1;
                do {
                    start = nums[start];
                    visited[start] = 1;
                    cnt += 1;
                }
                while(start != nums[i]);
                res = max(res, cnt);
            }
        }
        return res;   
    }
};