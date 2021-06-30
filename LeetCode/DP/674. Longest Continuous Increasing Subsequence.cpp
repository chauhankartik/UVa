#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 0, anchor = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i-1] >= nums[i]) anchor = i;
            ans = max(ans , i - anchor + 1);
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1,3,5,7};
    Solution ob;
    cout << ob.findLengthOfLCIS(nums) << endl;
}