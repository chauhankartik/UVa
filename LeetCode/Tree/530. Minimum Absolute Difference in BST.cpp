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
    void iterativeInOrderTraversal(TreeNode* root, int& res) {
        if(root == nullptr) return;

        stack<TreeNode*> s;
        int prev = -1;
        int curr = -1;
        while(true) {
            if(root != nullptr) {
                s.push(root);
                root = root->left;
            }
            else {
                if(s.empty()) break;
                root = s.top();
                s.pop();
                // process
                if(prev == -1) {
                    prev = root->val;
                }
                else {
                    curr = root->val;
                    res = min(res, abs(curr - prev));
                    prev = curr;
                }
                root = root->right;
             }
        }
    }

    int getMinimumDifference(TreeNode* root, int res = INT_MAX) {
        iterativeInOrderTraversal(root, res);
        return res;
    }
};