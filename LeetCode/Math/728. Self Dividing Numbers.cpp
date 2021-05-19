#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        vector<int> selfDividingNumbers(int left, int right) {
                vector<int> res;
                for(int i = left; i <= right; i++) {
                        int num = i;
                        while(num != 0) {
                                int digit = num % 10;
                                if(digit == 0)
                                        break;
                                if(i % digit)
                                        break;
                                num /= 10;
                        }
                        if(num == 0)
                                res.push_back(i);
                }
                return res;
        }
};