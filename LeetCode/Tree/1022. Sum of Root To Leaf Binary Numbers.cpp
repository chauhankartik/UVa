#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int value = 0, TreeNode *l = nullptr, TreeNode *r = nullptr) {
        val = value;
        left = l;
        right = r;
    }
};

class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        if(!root) return 0;

        int res = 0;
        stack<pair<TreeNode*, int>> s;
        s.push({root, 0});

        while(!s.empty()) {
            auto curr = s.top();
            s.pop();
            TreeNode* cur = curr.first;
            int cur_val = curr.second;

            cur_val = cur_val << 1 | cur->val;

            if(!cur->left && !cur->right)
                res += cur_val;
            
            if(cur->left) s.push({cur->left, cur_val});
            if(cur->right) s.push({cur->right, cur_val});
        }

        return res;
    }
};