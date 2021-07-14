#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(vector<string>&res, string& digits, int idx, string op) {
        if(idx == digits.size()) {
            res.push_back(op);
            return;
        }

        for(auto c : pad[digits[idx] -  '0']) {
            op += c;
            backtrack(res, digits, idx + 1, op);
            op = op.substr(0, op.length() - 1);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0) return res;
        backtrack(res, digits, 0, "");
        return res;
    }
};
