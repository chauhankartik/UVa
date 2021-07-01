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
    int sum = 0;
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root, nullptr, nullptr);
        return sum;
    }

    void dfs(TreeNode* root, TreeNode* parent, TreeNode* grandParent) {
        if(root == nullptr) return;

        if(root != nullptr && grandParent != nullptr && grandParent->val%2 == 0) {
            sum += root->val;
        }
        dfs(root->left, root, parent);
        dfs(root->right, root, parent);
    }
};