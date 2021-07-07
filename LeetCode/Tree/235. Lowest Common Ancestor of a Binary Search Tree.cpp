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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int l = p->val;
        int h = q->val;
        
        TreeNode* node = root;
        while(node) {
            int c = node->val;
            if(c < l && c < h) {
                node = node->right;
            }
            else if(c > l && c > h) {
                node = node->left;
            }
            else {
                return node;
            }
        } 
    }
};