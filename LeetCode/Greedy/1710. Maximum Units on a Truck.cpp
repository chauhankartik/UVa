#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> &first, vector<int> &second) {
            return first[1] > second[1];
        });
        int res = 0;
        for(auto box : boxTypes) {
            int current = min(box[0], truckSize);
            truckSize -= current;
            res += current * box[1];
            if(!truckSize) break;
        }
        return res;
    }
};