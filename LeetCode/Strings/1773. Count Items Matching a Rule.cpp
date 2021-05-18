#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
                int res = 0;
                for(int i = 0; i < items.size(); i++) {
                        if(ruleKey == "type") {
                                if(ruleValue == items[i][0]) res += 1;
                        } else if(ruleKey == "color") {
                                if(ruleValue == items[i][1]) res += 1;
                        } else {
                                if(ruleValue == items[i][2]) res += 1;
                        }
                }
                return res;
        }
};

int main() {

        return 0;
}