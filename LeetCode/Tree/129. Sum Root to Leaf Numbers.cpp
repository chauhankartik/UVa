#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v, TreeNode *l = nullptr, TreeNode *r = nullptr) {
        val = v;
        left = l;
        right = r;
    }
};

class Solution {
public:

    void rootToLeaf(TreeNode* root, int& sum, int current) {
        if(root->left == nullptr && root->right == nullptr) {
            current = 10 * current + root->val;
            sum += current;
            return;
        }

        if(root->left != nullptr) {
            rootToLeaf(root->left, sum, 10 * current + root->val);
        }

        if(root->right != nullptr) {
            rootToLeaf(root->right, sum, 10 * current + root->val);
        }
    }

    int sumNumbers(TreeNode* root) {
        int res = 0;
        if(!root) return res;

        rootToLeaf(root, res, 0);
        return res;
    }
};