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

    vector<TreeNode*> constructBst(int l, int h) {
        vector<TreeNode*> res;
        if(l > h) {
            res.push_back(nullptr);
            return res;
        }

        // select root
        for(int i = l; i <= h; ++i) {
            auto left = constructBst(l, i - 1);
            auto right = constructBst(i+1, h);
            for(auto start : left) {
                for(auto end: right) {
                    TreeNode* newNode = new TreeNode(i, start, end);
                    res.push_back(newNode);
                }
            }
        }

        return res;
    }

    vector<TreeNode*> generateTrees(int n) {
        if(n == 0)
            return vector<TreeNode*>(0);
        return constructBst(1, n);
    }
};