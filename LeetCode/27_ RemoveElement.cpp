#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
        int removeElement(vector<int>& nums, int val) {
                int n = nums.size();
                int ctr = 0;
                for(int i = 0; i < n; i++) {
                        if(nums[i] == val) {
                                ctr += 1;
                                int idx = i;
                                while(idx < n) {
                                        nums[idx] = (idx+1 < n) ? nums[idx+1] : nums[idx];
                                        idx += 1;
                                }
                                n -= 1;
                                i -= 1;
                        }
                }
                return nums.size() - ctr;
        }
};

int main() {

        vector<int> nums;
        int n;
        while(cin >> n) nums.push_back(n);
        n = nums[nums.size() - 1];
        nums.pop_back();
        Solution obj;
        cout << obj.removeElement(nums, n) << endl;
        return 0;
}