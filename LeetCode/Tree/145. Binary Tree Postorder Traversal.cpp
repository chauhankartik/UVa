#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
        int val;
        TreeNode *left, *right;
};

class Solution {
public:
        void helper(vector<int> &v, TreeNode *root)
        {
                if(root != nullptr) {
                        if(root->left != nullptr)
                                helper(v, root->left);
                        if(root->right != nullptr)
                                helper(v, root->right);
                        v.push_back(root->val);
                }
        }

        vector<int> postorderTraversal(TreeNode* root) {
                vector<int> res;
                helper(res, root);
                return res;
        }
};

int32_t main()
{

}