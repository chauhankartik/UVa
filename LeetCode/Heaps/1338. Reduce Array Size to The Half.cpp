#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(const auto& c : arr) mp[c] += 1;
        priority_queue<pair<int, int>> heap;

        int total = 0;
        int res = 0;
        for(auto &c : mp) {
            heap.push({c.second, c.first});
            total += c.second;
        }

        int k = total;
        while(k > (total + 1) / 2) {
            k -= heap.top().first;
            res += 1;
            heap.pop();
        }
        return res;
    }
};