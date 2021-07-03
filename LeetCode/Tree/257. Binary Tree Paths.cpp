#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v = 0, TreeNode* l = nullptr, TreeNode* r = nullptr) {
        val = v;
        left = l;
        right = r;
    }
};

class Solution {
public:
    void binartTreePaths(TreeNode* root, string t, vector<string>& res) {
        if(root->left == 0 && root->right == 0) {
            res.push_back(t);
            return;
        }

        if(root->left) binartTreePaths(root->left, t + "->" + to_string(root->left->val), res);
        if(root->right) binartTreePaths(root->right, t + "->" + to_string(root->right->val), res);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;

        binartTreePaths(root, to_string(root->val), res);
        return res;
    }
};