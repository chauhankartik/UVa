#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
        int val;
        TreeNode *left, *right;
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
        vector<int> vec;

        void generateVector(TreeNode *root) {
                if(root != nullptr) {
                        if(root->left!= nullptr)
                                generateVector(root->left);
                        vec.push_back(root->val);
                        if(root->right!=nullptr)
                                generateVector(root->right);
                }
        }

        TreeNode* helper(TreeNode *root, TreeNode* &res) {
                res = new TreeNode(vec[0]);
                TreeNode *t = res;

                for(int i = 1; i < vec.size(); i++) {
                        TreeNode *temp = new TreeNode(vec[i]);
                        t->right = temp;
                        t = temp;
                }

                return res;
        }

        TreeNode* increasingBST(TreeNode* root) {
                generateVector(root);
                TreeNode *res = nullptr;
                helper(root, res);
                return res;
        }
};