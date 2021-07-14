#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        multiset<int> s;
        for(auto c : nums1) s.insert(c);
        for(auto c : nums2) {
            auto itr = s.find(c);
            if(itr != s.end()) {
                res.push_back(c);
                s.erase(itr);
            }
        }
        return res;
    }
};