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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(target == nullptr) return nullptr;

        queue<TreeNode*> q, r;
        q.push(original);
        r.push(cloned);

        while(!q.empty()) {
            TreeNode *a = q.front();
            TreeNode *b = r.front();
            q.pop();
            r.pop();
            if(target == a) return b;
            if(a->left != nullptr) {
                q.push(a->left);
                r.push(b->left);
            }
            if(a->right != nullptr) {
                q.push(a->right);
                r.push(b->right);
            }
        }

        return nullptr;
    }
};