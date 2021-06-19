#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int helper(const int n,
               const vector<int>& squares) {
        
    }

    int numSquares(int n) {
        vector<int> sqr;
        for(int i = 1; pow(i, 2) <= n; ++i) {
            sqr.push_back(pow(i, 2));
        }
        return helper(n , sqr);
    }
};