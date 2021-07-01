#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<int, int> dp;
    int numTrees(int n) {
        if(n == 0 || n == 1) {
            return 1;
        }
        int res = 0;
        for(int i = 1; i <= n; i++) {
            if(dp.find(i-1) == dp.end()) {
                dp[i-1] = numTrees(i-1);
            }
            if(dp.find(n-i) == dp.end()) {
                dp[n-i] = numTrees(n-i);
            }
            res += dp[i-1]*[n-i];
        }
        return res;
    }
};