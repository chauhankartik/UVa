#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> cache(matrix);

        for(int i = 0; i < m; i++) {
            for(int j = 1; j < n; j++) {
                cache[i][j] = cache[i][j-1] ^ matrix[i][j];
            }
        }        

        for(int i = 0; i < n; i++) {
            for(int j = 1; j < m; j++) {
                cache[j][i] = cache[j-1][i] ^ matrix[j][i];
            }
        }

        priority_queue<int, vector<int>, greater<int>> min_heap;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                min_heap.push(cache[i][j]);
                // if(min_heap.size() > k) min_heap.pop();
            }
        }

        while(min_heap.size() > k) min_heap.pop();

        return min_heap.top();
    }
};