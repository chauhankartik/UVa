#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(const auto &c : nums) mp[c] += 1;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
        greater<pair<int, int>> > heap;
        vector<int> res;

        for(auto c : mp) {
            heap.push({c.second, c.first});
            if(heap.size() > k) heap.pop();
        }

        while(!heap.empty()) {
            res.push_back(heap.top().second); heap.pop();
        }

        return res;
    } 
};