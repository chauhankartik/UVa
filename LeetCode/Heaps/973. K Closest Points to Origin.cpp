#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    template <typename T>
    double	eucledian(const std::vector<T>& a, const std::vector<T>& b = {0, 0})
    {
	    std::vector<double>	auxiliary;
	    std::transform (a.begin(), a.end(), b.begin(), std::back_inserter(auxiliary),//
	    [](T element1, T element2) {return pow((element1-element2),2);});
	    auxiliary.shrink_to_fit();

	    return  sqrt(std::accumulate(auxiliary.begin(), auxiliary.end(), 0));
    } 

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;

        priority_queue<pair<double, pair<int, int>>> heap;    
        for(int i = 0; i < points.size(); i++) {
            double dis = eucledian(points[i]);
            heap.push({dis, {points[i][0], points[i][1]}});
            if(heap.size() > k) heap.pop();
        }

        while(!heap.empty()) {
            auto c = heap.top().second; heap.pop();
            vector<int> temp{c.first, c.second};
            res.push_back(temp);
        }
        return res;
    }
};