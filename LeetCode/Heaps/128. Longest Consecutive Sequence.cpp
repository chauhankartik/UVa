#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> mp;
        for(const auto&c : nums) {
            mp[c] += 1;
        }

        unordered_map<int, int> :: iterator it;
        it = mp.begin();

        set<int> v;
        while(it != mp.end()) {
            v.insert((*it).first);
            it++;
        }

        int local_max = 0, global_max = -1;
        int el = *(v.begin());
        set<int> :: iterator itr;
        itr = v.begin();
        itr++;

        while(itr != v.end()) {
            if(*itr - el == 1) {
                el = *itr;
                local_max += 1;
            }
            else {
                global_max = max(global_max, local_max + 1);
                local_max = 0;
                el = *itr;
            }
            itr++;
        }

        return global_max;
    }
};