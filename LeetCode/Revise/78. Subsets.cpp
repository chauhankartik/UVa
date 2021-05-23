#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        vector<vector<int>> res;
        vector<int> subset;
        
        void helper(int i, vector<int>& nums) {

                // base case
                if(i >= nums.size()) {
                        res.push_back(subset);
                        return;
                }

                // include nums[i]
                subset.push_back(nums[i]);
                helper(i+1, nums);

                // don't include nums[i]
                subset.pop_back();
                helper(i+1, nums);
        }

        vector<vector<int>> subsets(vector<int>& nums) {
                helper(0, nums);
                return res;
        }
};

int main() {
        vector<int> nums{1, 2, 3};
        Solution o;
        vector<vector<int>> res;
        res = o.subsets(nums);

        for(auto c : res) {
                cout << c.size() << endl;
        }
}