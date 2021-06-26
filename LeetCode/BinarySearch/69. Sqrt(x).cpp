#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        int res = -1;
        while(low <= high) {
            int mid = low + (high - low) /2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x) {
                res = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return res;      
    }
};