#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void recurse(vector<vector<int>>&res, vector<int>& candidates, 
                int sum, vector<int> temp, int idx) {
        if(sum == 0) { res.push_back(temp); return;}
        if(sum < 0 || idx == candidates.size()) return;
    
        temp.push_back(candidates[idx]);
        recurse(res, candidates, sum - candidates[idx], temp, idx);
        temp.pop_back();
        recurse(res, candidates, sum, temp, idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        if(target == 0) return res;
        sort(candidates.begin(), candidates.end());
        recurse(res, candidates, target, {}, 0);
        return res;
    }
};