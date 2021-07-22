#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_map<char, int> mp;
        int l = 0;
        for(int r = 0; r < s.length(); r++) {
            if(mp.find(s[r]) == mp.end()) {
                res = max(res, r - l + 1);
            } else {
                if(mp[s[r]] < l) {
                    res = max(res, r - l + 1);
                }
                else {
                    l = mp[s[r]] + 1;
                }
            }
            mp[s[r]] = r;
        }
        return res;
    }
};