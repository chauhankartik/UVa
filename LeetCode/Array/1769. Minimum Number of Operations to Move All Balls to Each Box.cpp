#include<bits/stdc++.h>
using namespace std;
/*
    prefix sum :- O(n)
    brute force :- O(n*n)
*/

/* 
brute force version
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;

        for(int i = 0; i < boxes.length(); i++) {
            int op = 0;
            for(int j = 0; j < boxes.length(); j++) {
                if(boxes[j] == '1') {
                    op += abs(j - i);
                }
            }
            ans.push_back(op);
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        const auto N = boxes.length();

        vector<int> res(N, 0);

        // left to right
        int cnt = 0, sum = 0;
        for(size_t i = 0; i < N; ++i) {
            res[i] += (i+1) * cnt - sum;

            if(boxes[i] == '1') {
                sum += (i + 1);  // idx
                cnt += 1;
            }
        }

        // right to left
        cnt = 0, sum = 0;
        for(int i = N - 1; i >= 0; --i) {
            res[i] += (N - i) * cnt - sum;

            if(boxes[i] == '1') {
                sum += (N - i);
                cnt += 1;
            }
        }
        return res; 
    }
};