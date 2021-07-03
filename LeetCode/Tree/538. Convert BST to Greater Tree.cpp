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
    TreeNode* convertBST(TreeNode* root) {
        int s = 0;
        traverse(root, s);
        return root;
    }

    void traverse(TreeNode* node, int& s) {
        if(node == nullptr) return;
        traverse(node->right, s);
        node->val += s;
        s = node->val;
        traverse(node->left, s);
    }
};