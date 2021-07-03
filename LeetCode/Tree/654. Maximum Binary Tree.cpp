#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size());
    }

    TreeNode* helper(vector<int>& nums, int l, int r) {  
        /*
            constructrs tree for a(l, r-1)
        */
        if(l == r) return nullptr;
        int max_idx = findMax(nums, l, r);

        TreeNode* newNode  = new TreeNode(nums[max_idx], helper(nums, l, max_idx), helper(nums, max_idx + 1, r));
        return newNode;
        //return nullptr;
    }

    int findMax(vector<int>& nums, int l, int r) {
        int res = l;
        for(int i = l; i < r; i++) {
            if(nums[i] > nums[res]) {
                res = i;
            }
        }
        return res;
    }
};