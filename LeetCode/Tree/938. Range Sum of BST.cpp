#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
        int val;
        TreeNode *left, *right;        
};


class Solution {
public:
        int res = 0;

        void helper(TreeNode* root, int low, int high) {
                if(root != nullptr) {
                        if(root->left!= nullptr) {
                                helper(root->left, low, high);
                        }
                        if(root->val>= low && root->val <= high) {
                                res += root->val;
                                if(root->val > high) return;
                        }
                        if(root->right!=nullptr) {
                                helper(root->right, low, high);
                        }
                }
        }       

        int rangeSumBST(TreeNode* root, int low, int high) {
                helper(root, low, high);
                return res;
        }
};