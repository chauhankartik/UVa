#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(const auto& c : s) mp[c] += 1;
        priority_queue<pair<int, char>> heap;

        for(const auto &c : mp) {
            heap.push({c.second, c.first});
        }     

        string res = "";
        while(!heap.empty()) {
            int cnt = heap.top().first;
            char ch = heap.top().second;
            heap.pop();
            while(cnt--)
                res += ch; 
        }
        return res;
    }
};