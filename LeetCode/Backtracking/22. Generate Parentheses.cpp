#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backtrack(vector<string>& res, string op, int n, int m) {
        if(n == 0 && m == 0) {
            res.push_back(op);
            return;
        }

        if(n > 0) {
            backtrack(res, op + '(', n - 1, m + 1);
        }

        if(m > 0) {
            backtrack(res, op + ')', n , m - 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n == 0) return res;
        backtrack(res,"", n, 0);
        return res;
    }
};