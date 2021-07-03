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
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == nullptr) return sum;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();

            // if(temp->val > high) return sum;
            if(temp->val >= low && temp->val <= high) sum += temp->val;

            if(temp->left != nullptr) q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right); 
        }
        return sum;
    }
};