#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        string replaceDigits(string s) {
                string res;
                for(int i = 0; i < s.length(); i++) {
                        if(i & 1) {
                                for(int _i = 0; _i < s[i] - '0'; _i++) {
                                        ++s[i-1];
                                }
                                res += s[i-1];

                        }
                        else {
                                res += s[i];
                        }
                }
                return res;
        }
};