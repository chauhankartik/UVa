#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int sofn(long long int x) {
                if(x < 0)
                        return -1;
                if(x > 0)
                        return 1;
                return 0;
        }

        int arraySign(vector<int>& nums) {
                long long int n = 1;
                for(auto c : nums) {
                        n = n * c;
                        if(n > 0)
                                n = 1;
                        if(n < 0)
                                n = -1;
                }
                return sofn(n);
        }
};