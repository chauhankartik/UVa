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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr) {
            return res;
        }

        stack<TreeNode*> s;

        TreeNode* curr = root;

        while(curr != nullptr || !s.empty()) {
            while(curr != nullptr) {
                s.push(curr);
                curr = curr->right;
            }
            TreeNode* temp = s.top();
            s.pop();
            if(temp->left != nullptr) {
                
            }
            res.push_back(temp->val);
        }
    }
};