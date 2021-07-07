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
    /*
        important
    */

    int dfs(TreeNode* root, int& max_sum) {
        if(root == nullptr) return 0;

        int left_sum = max(0, dfs(root->left, max_sum));
        int r_sum = max(0, dfs(root->right, max_sum));
        max_sum = max(max_sum, root->val + left_sum + r_sum);

        return root->val + max(left_sum, r_sum);
    }

    int maxPathSum(TreeNode* root) {
        if(!root) return 0;

        int max_sum = INT_MIN;
        dfs(root, max_sum);
        return max_sum;
    }
};