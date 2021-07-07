#include<bits/stdc++.h>
using namespace std;

#define pii pair<int, string>

class Solution {
public:

    struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        }
    };


    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(const auto& c:  words) mp[c] += 1;
        priority_queue<pii, vector<pii>, Comp> heap;

        for(auto &c : mp) {
            heap.push({c.second, c.first});
            if(heap.size() > k) heap.pop();
        }

        vector<string> res;
        while(!heap.empty()) {
            auto c = heap.top(); heap.pop();
            res.push_back(c.second);
        }

        return res;
    }
};