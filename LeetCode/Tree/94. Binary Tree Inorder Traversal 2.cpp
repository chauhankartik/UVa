#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
        int val;
        TreeNode *left;
        TreeNode *right;
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) return res;

        stack<TreeNode*> s;
        TreeNode* temp = root;

        while(temp!= nullptr || !s.empty()) {
            while(temp != nullptr) {
                s.push(temp);
                temp = temp->left;
            }
            temp = s.top();
            res.push_back(temp->val);
            s.pop();
            temp = temp->right;
        }        
        return res;
    }
};