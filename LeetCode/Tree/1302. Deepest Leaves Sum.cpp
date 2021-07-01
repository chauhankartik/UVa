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

// class Solution {
// public:
//     int deepestLeavesSum(TreeNode* root) {
//         if(root == nullptr) return 0;

//         vector<pair<int, int>> vec;
//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});

//         while(!q.empty()) {
//             TreeNode* temp = q.front().first;
//             int dis = q.front().second;
//             q.pop();

//             vec.push_back({dis, temp->val});

//             if(temp->left != nullptr) q.push({temp->left, dis + 1});
//             if(temp->right != nullptr) q.push({temp->right, dis + 1});
//         }

//         int max_depth = vec[vec.size() - 1].first;
//         int sum = 0;
//         sort(vec.begin(), vec.end());
//         for(int i = vec.size() - 1; i >= 0; i--) {
//             if(vec[i].first == max_depth) sum += vec[i].second;
//         }

//         return sum;
//     }
// };


class Solution {
public:
    int sum = 0, deepest = 0;
    int deepestLeavesSum(TreeNode* root, int depth = 0) {
        if(!root) return 0;
        if(!root->left && !root->right) {
            if(depth == deepest) sum += root->val;
            else if(depth > deepest) sum = root->val, deepest = depth;
        }
        deepestLeavesSum(root->left, depth + 1);
        deepestLeavesSum(root->right, depth + 1);

        return sum;
    }
};