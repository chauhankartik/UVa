#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = -1;
        int res = 0;
        for(int i = 0; i < rectangles.size(); i++) {
            maxLen = max(maxLen, min(rectangles[i][0], rectangles[i][1]));
        }    
        for(int i = 0; i < rectangles.size(); i++) {
            if(min(rectangles[i][0],rectangles[i][1]) >= maxLen) res += 1;
        }
        return res;
    }
};