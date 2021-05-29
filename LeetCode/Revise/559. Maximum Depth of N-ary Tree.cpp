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

queue<Node*> q;

class Solution {
public:
        // O(N+N-1) ~ O(N)
        int bfs(Node* root) {
                q.push(root);
                int depth = 0;
                while(!q.empty()) {
                        int sz = q.size();
                        for(int i = 0; i < sz; i++) {
                                Node* n = q.front();
                                q.pop();
                                for(auto c : n->children) {
                                        // dist[c->val] = 1 + dist[n->val];
                                        q.push(c);
                                }
                        }
                        depth += 1;
                }
                return depth;
        }

        int maxDepth(Node* root) {
                if(root == nullptr) return 0;
                return bfs(root); // O(N)
        }
};