#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int res = -1;
        int l = 0, r = arr.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
            else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return res;
    }
};

int main() {
    Solution ob;
    vector<int> a = {3,5,3,2,0};
    cout << ob.peakIndexInMountainArray(a) << endl;
}