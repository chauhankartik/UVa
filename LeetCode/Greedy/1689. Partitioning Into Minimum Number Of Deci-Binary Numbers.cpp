#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minPartitions(string n) {
        int res = -1;
        for(auto& c : n) res = max(res, c - '0');
        return res;
    }
};