#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        int global_max = INT_MIN;
        int local_max = 0;
        for(int i = 0; i < n; i++) {
            local_max += arr[i];
            if(global_max < local_max) {
                global_max = local_max;
            }
            if(local_max < 0) local_max = 0;
        }
        return global_max;
    }
};