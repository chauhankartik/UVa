#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        string res = "";
        if(s.size() == 0 || t.size() == 0) return res;

        int char_set[256] = {0};
        for(int i = 0; i < t.size(); i++) {
            char_set[t[i]]++;
        }      
        
    }
};