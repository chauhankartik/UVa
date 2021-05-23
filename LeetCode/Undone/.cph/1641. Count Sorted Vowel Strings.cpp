#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
        int res = 0;

        int countVowelStrings(int n) {
                vector<char> a{'a', 'e', 'i', 'o', 'u'};
                helper(a, 0, n, 0);
                return res;
        }

        void helper(vector<char>& a, int c, int n, int low) {

                if(c == n) {
                        res += 1;
                        return;
                }

                for(int i = low; i < a.size(); i++) {
                        c++;
                        helper(a, c, n, i);
                        c--;
                }
        }
};