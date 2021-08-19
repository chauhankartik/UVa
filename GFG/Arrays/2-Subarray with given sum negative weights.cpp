#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int subArraySum(int arr[], int n, int sum) {
        unordered_map<int, int> mp;
        mp[arr[0]] = 0;
        int prefix[n];
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = arr[i] + prefix[i-1];
            mp[prefix[i]] = i;
        }
        int res = 0;
        for(int i = 0; i < n; i++) {
            if(prefix[i] == sum) res += 1;
            else if(mp.find(sum - prefix[i]) != mp.end()) res += 1;
        }
        return res;
    }
};