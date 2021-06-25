#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int res = 0;
        sort(tokens.begin(), tokens.end());
        int i = 0, j = tokens.size() - 1;
        bool flag = true;
        while (i <= j && flag)
        {
            if(power >= tokens[i]) {
                power -= tokens[i];
                i += 1;
                res += 1;
            }    
            else if(res >= 1) {
                if(power + tokens[j] >= tokens[i] and i != j) {
                    power += tokens[j];
                    j -= 1;
                    res -= 1;
                }
                else {
                    flag = false;
                }
            }
            else {
                break;
            }
        }
        return res;
    }
};