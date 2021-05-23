#include<bits/stdc++.h>
using namespace std;

struct  TreeNode
{
        int val;
        TreeNode *left, *right;
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
        TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
                if(root1 == nullptr)
                        return root2;
                if(root2 == nullptr)
                        return root1;
                root1->val += root2->val;
                mergeTrees(root1->left, root2->left);
                mergeTrees(root1->right, root2->right);
                return root1;
        }
};
