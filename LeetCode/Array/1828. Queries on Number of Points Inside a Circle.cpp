#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> res;
        for (auto &q : queries)
        {
            int ctr = 0;
            int rr = q[2] * q[2];
            for (auto &p : points)
            {
                ctr += (q[0] - p[0]) * (q[0] - p[0]) + (q[1] - p[1]) * (q[1] - p[1]) <= rr;
            }
            res.push_back(ctr);
        }
        return res;
    }
};