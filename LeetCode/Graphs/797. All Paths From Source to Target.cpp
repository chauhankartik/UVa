#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int target;
    vector<vector<int>> res;
    vector<int> temp;

    void dfs(vector<vector<int>>& graph, int parent) {
        temp.push_back(parent);
        if(parent == target) res.push_back(temp);
        else for(auto c : graph[parent]) {
            dfs(graph, c);
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size() - 1;
        dfs(graph, 0);
        return res;
    }
};