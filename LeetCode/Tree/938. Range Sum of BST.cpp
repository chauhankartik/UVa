#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
        int val;
        TreeNode *left, *right;        
};


class Solution {
public:
        void helper(TreeNode *root, int low, int high, int &sum)
        {
                if(root!=nullptr) {
                        if(root->left != nullptr)
                                helper(root->left, low, high, sum);
                        if(root->val >= low && root->val <= high) {
                                sum += root->val;
                                if(root->val == high) return;
                        }
                        if(root->right != nullptr)
                                helper(root->right, low, high, sum);
                }
        }

        int rangeSumBST(TreeNode* root, int low, int high) {
                int sum = 0;
                helper(root, low, high, sum);
                return sum;
        }
};
