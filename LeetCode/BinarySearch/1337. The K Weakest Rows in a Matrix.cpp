#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        vector<pair<int, int>> mp;

        for(int i = 0; i < mat.size(); i++) {
            int low = 0;
            int high = mat[i].size() - 1;
            int idx = -1;
            while(low <= high) {
                int mid = low + (high - low) / 2;
                if(mat[i][mid] == 1) {
                    idx = mid;
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
            mp.push_back({idx + 1, i});
        }    
        sort(mp.begin(), mp.end());
        for(int i = 0; i < k; i++) res.push_back(mp[i].second);
        return res;
    }
};