#include<bits/stdc++.h>
using namespace std;
#define int long long int

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]) low = mid + 1;
            else high = mid;
        
            /*
                12 13 14 15 16 1 2 3 4 
            */
        }
        int pivot = low;
        low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int realMid = (mid + pivot) % nums.size();
            if(nums[realMid] == target) return realMid;
            if(nums[realMid] < target) low = mid + 1;
            else high = mid - 1;
        }
        
        return low;
    }
};

int32_t main() {

    Solution ob;
    vector<int> v(10);
    for(int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    int res = ob.search(v, 5);
    cout << res << endl;
    return 0;
}