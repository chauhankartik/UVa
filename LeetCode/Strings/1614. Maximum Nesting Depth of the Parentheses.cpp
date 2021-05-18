#include<bits/stdc++.h>
using namespace std;
// to be done

class Solution {
public:
        int maxDepth(string s) {
                int res = 0, current_depth = 0;
                for(int i = 0; i < s.length(); i++) {
                        if(s[i] == '(') {
                                current_depth += 1;
                                res = max(res, current_depth);
                        }
                        else if(s[i] == ')') current_depth -= 1;
                }
                return res;
        }
};

int main() {

        return 0;
}