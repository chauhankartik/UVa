#include<bits/stdc++.h>
using namespace std;

class Node {
public:
        int val;
        vector<Node*> children;

        Node() {}

        Node(int _val) {
                val = _val;
        }

        Node(int _val, vector<Node*> _children) {
                val = _val;
                children = _children;
        }
};

class Solution {
public:
        vector<int> res;
        // DFS
        vector<int> preorder(Node* root) {
                if(root != nullptr) {
                        if(root->val != -1) {
                                res.push_back(root->val);
                                root->val = -1;
                        }
                        vector<Node*> current = root->children;
                        for(auto c : current) {
                                if(c != nullptr)
                                        preorder(c);
                                if(c->val!=-1)
                                        res.push_back(c->val);
                        }
                }
                return res;
        }
};