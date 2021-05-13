#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
        void moveZeroes(vector<int>& nums) {
                int n = nums.size();
                for(int i = 0; i < n; i++) {
                        if(nums[i] == 0) {
                                int idx = i;
                                while(idx < n) {
                                        nums[idx] = (i+1 < n) ? nums[idx+1] : nums[idx];
                                        idx += 1;
                                }
                                idx -= 1;
                                nums[idx] = 0;
                                i -= 1;
                        }
                }
        }
};

int main() {

        Solution obj;
        vector<int> nums; int n; while(cin >> n) nums.push_back(n);
        obj.moveZeroes(nums);
        for(auto c : nums) cout << c << " ";
        return 0;
}