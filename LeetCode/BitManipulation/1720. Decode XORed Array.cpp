#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        vector<int> decode(vector<int>& encoded, int first) {
                vector<int> res;
                res.push_back(first);
                int last = first;
                for(int i = 0; i < encoded.size(); i++) {
                        int enc = encoded[i];
                        last = last ^ enc;
                        res.push_back(last);
                }
                return res;
        }
};