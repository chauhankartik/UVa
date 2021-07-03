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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<pair<int, int>> levels;
        vector<double> res;
        if(root == nullptr) return res;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while(!q.empty()) {
            auto curr = q.front();
            q.pop();

            levels.push_back({curr.second, curr.first->val});

            if(curr.first->left != nullptr) {
                q.push({curr.first->left, curr.second + 1});
            }
            if(curr.first->right != nullptr) {
                q.push({curr.first->right, curr.second + 1});
            }
        }

        sort(levels.begin(), levels.end());

        int curr_level = levels[0].first;
        int idx = 0;
        double sum = 0, ctr = 0;
        while(idx != levels.size()) {
            if(levels[idx].first == curr_level) {
                sum += levels[idx].second;
                ctr += 1;
                idx += 1;
            }
            else {
                res.push_back(sum / ctr);
                ctr = 0;
                sum = 0;
                curr_level = levels[idx].first;
            }
        }

        res.push_back(sum / ctr);
        return res;
    }
};