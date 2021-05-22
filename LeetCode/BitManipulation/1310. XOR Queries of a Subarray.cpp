#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int v[100001];
        vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
                memset(v, 0, sizeof v);
                vector<int> res;
                int n = arr.size();
                v[n-1] = arr[n-1];
                for(int i = n - 2; i >= 0; i--) {
                        v[i] = v[i+1] ^ arr[i];
                }

                for(int i = 0; i < queries.size(); i++) {
                        res.push_back(v[queries[i][0]] ^ v[queries[i][1] + 1]);
                }
                return res;
        }
};