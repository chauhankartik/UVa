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
    int sentinel = 0;

    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* temp = root;
        traverse(temp);
        return root;
    }

    void traverse(TreeNode* root) {
        if(root != nullptr) {
            traverse(root->right);
            root->val += sentinel;
            sentinel = root->val;
            traverse(root->left);
        }
    }
};