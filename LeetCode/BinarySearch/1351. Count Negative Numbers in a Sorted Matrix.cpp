#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
           int res = 0;
           for(int i = 0; i < grid.size(); ++i) {
                int low = 0;
                int high = grid[i].size() - 1;
                int tmp = -1;
                while(low <= high) {
                    int mid = low + (high - low) / 2;
                    if(grid[i][mid] < 0) {
                        tmp = mid;
                        high = mid - 1;
                    }
                    else  {
                        low = mid + 1;
                    }
                }
                if(tmp != -1)
                    res += (grid[i].size() - tmp);
           }
           return res;
    }
};