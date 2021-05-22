#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        vector<int> countBits(int num) {
                vector<int> res;
                for(int i = 0; i <= num; i++) {
                        int k = 0;
                        for(int j = 0; j < 32; j++) {
                                if(i & (1 << j)) k += 1;
                        }
                        res.push_back(k);
                }
                return res;
        }
};