#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int singleNumber(vector<int>& nums) {
                int res = 0;
                for(auto c : nums) res ^= c;
                return res;
        }
};

int main() {}