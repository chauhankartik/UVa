#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x - 1;
        constexpr int eps = 1e-14;
        while(low <= high) {
            double mid = low + ((high - low) >> 1);
            if(abs(mid*mid - x) <= eps) return mid;
            else if(mid*mid > x) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};