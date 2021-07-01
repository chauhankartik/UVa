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
    int minDepth(TreeNode* root) {
        // visit all nodes, when u encounter a node having no child, return;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while(!q.empty()) {
            TreeNode* temp = q.front().first;
            int dis = q.front().second;
            q.pop();
            if(temp->left == nullptr && temp->right == nullptr) return dis;
            if(temp->left != nullptr) {
                q.push({temp->left, dis + 1});
            }
            if(temp->right != nullptr) {
                q.push({temp->right, dis + 1});
            }
        }

        return -1;
    }
};