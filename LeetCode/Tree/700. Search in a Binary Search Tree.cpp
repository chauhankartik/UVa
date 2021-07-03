#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int value = 0, TreeNode* leftptr = nullptr, TreeNode* rightptr = nullptr) {
        val = value;
        left = leftptr;
        right = rightptr;
    }
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;
        
        if(root->val == val) return root;
        else if(root->val > val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
    }
};