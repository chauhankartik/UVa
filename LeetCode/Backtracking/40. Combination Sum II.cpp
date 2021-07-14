#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void recurse(vector<vector<int>>& res, vector<int>& candidates, int target,
                vector<int> temp, int idx) {
        
        if(target == 0) {res.push_back(temp); return;}
        if(target < 0 || idx == candidates.size()) return;

        for(int i = idx; i < candidates.size(); i++) {
            if(candidates[i] > target) return;
            if(i && candidates[i] == candidates[i-1]&&i>idx) continue;
            temp.push_back(candidates[i]);
            recurse(res, candidates, target - candidates[i], temp, idx + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        if(target == 0) return res;
        sort(candidates.begin(), candidates.end());
        recurse(res, candidates, target, {}, 0);
        return res;
    }
};