#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int countConsistentStrings(string allowed, vector<string>& words) {
                int res = 0;
                set<char> s;
                for(auto c : allowed) s.insert(c);

                for(auto c : words) {
                        int j = 1;
                        for(auto x : c) {
                                if(s.find(x) == s.end()) {
                                        j = 0;
                                        break;
                                }
                        }
                        if(j) res += 1;
                }

                return res;
        }
};