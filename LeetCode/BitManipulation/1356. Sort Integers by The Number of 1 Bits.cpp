#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        vector<int> sortByBits(vector<int>& arr) {
                vector<pair<int, int>> v;
                for(int i = 0; i < arr.size(); i++) {
                        int num = arr[i];
                        int cnt = 0;
                        for(int j = 0; j < 32; j++) {
                                if(num & (1 << j)) cnt += 1;
                        }
                        v.push_back({cnt, num});
                }
                sort(v.begin(), v.end());
                vector<int> res;
                for(int i = 0; i < v.size(); i++) {
                        res.push_back(v[i].second);
                }
                return res;
        }
};

int main() {}