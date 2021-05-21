#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
        TreeNode(int val) {val = val; left = nullptr; right = nullptr;}
};



int main()
{
        struct TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        return 0;
}