#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = nums1.size() - 1;
        int j = nums2.size() - 1;

        while(i >= 0 && j >= 0) {
            
            if(nums1[i] == nums2[j]) {
                int k = nums1[i];
                res.push_back(k);
                while(i >= 0 && nums1.back() == k) {
                    nums1.pop_back();
                    i -= 1;
                }

                while(j >= 0 && nums2.back() == k) {
                    nums2.pop_back();
                    j -= 1;
                }
            }

            else {
                if(nums1[i] > nums2[j]) {
                    nums1.pop_back();
                    i -= 1;
                }
                else {
                    nums2.pop_back();
                    j -= 1;
                }
            }
        }

        return res;
    }
};

