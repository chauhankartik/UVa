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
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr) return -1;
        stack<TreeNode*> travStack;
        TreeNode* temp = root;
        // travStack.push(temp);
        while(temp != nullptr || travStack.empty() == false) {
            while(temp) {
                travStack.push(temp);
                temp = temp->left;
            }
            temp = travStack.top();
            travStack.pop();
            if(--k == 0) {
                return temp->val;
            }
            temp = temp->right;
        }
        return -1;
    }
};