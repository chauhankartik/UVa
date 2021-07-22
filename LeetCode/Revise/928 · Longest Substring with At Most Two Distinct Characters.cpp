#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /**
     * lintcode 928
     * @param s: a string
     * @return: the length of the longest substring T that contains at most 2 distinct characters
     */
    int lengthOfLongestSubstringTwoDistinct(string &s) {
        // Write your code here
        int k = 2;
        if(s.size() == 0 || k == 0) return 0;

        int l = 0, r = 0, res = 0, cnt = 0;
        int char_set[256] = {0};

        while(r < s.size()) {
            if(char_set[s[r]] == 0) {
                cnt++;
            }
            char_set[s[r]]++;
            r++;

            while(cnt > k) {
                char_set[s[l]]--;
                if(char_set[s[l]] == 0) {
                    cnt--;
                }
                l++;
            }
            res = max(res, r - l); 
        }
        return res;
    }
};

int main() {
    Solution ob;
    string s; cin >> s;
    cout << ob.lengthOfLongestSubstringTwoDistinct(s) << endl;
}