#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
        int val;
        TreeNode *left;
        TreeNode *right;
};

class Solution {
public:
        void helper(vector<int> &v, TreeNode *root)
        {
                if(root!=nullptr) {
                        if(root->left != nullptr)
                                helper(v, root->left);
                        v.push_back(root->val);
                        if(root->right!=nullptr)
                                helper(v, root->right);
                }
        }

        vector<int> inorderTraversal(TreeNode* root) {
                vector<int> res;
                helper(res, root);
                return res;
        }
};
