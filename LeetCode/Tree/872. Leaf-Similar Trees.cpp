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
    void dfs(TreeNode* root, vector<int>& v) {
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr) v.push_back(root->val);
        dfs(root->left, v);
        dfs(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {    
        vector<int> a, b;
        dfs(root1, a);
        dfs(root2, b);  
        return a == b;
    }
};