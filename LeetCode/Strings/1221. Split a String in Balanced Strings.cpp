#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int balancedStringSplit(string s) {
                int res = 0, l = 0, r = 0;
                for(int i = s.length() - 1; i >= 0; i--) {
                        if(s[i] == 'L') {
                                l += 1;
                        }
                        else if(s[i] == 'R') {
                                r += 1;
                        }
                        if(l && l == r) {
                                res += 1;
                                l = 0, r = 0;
                        }
                }
                return res;
        }
};

int main() {

        return 0;
}