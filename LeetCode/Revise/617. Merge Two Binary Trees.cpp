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
                if(!root1)
                        return root2;
                if(!root2);
                        return root1;

                root1->val = root1->val + root2->val;
                root1->left = mergeTrees(root1->left, root2->left);
                root1->right = mergeTrees(root1->right, root2->right);
                
                return root1;
        }
};

int main()
{

}