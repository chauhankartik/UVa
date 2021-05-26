#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
                string a, b;
                for(auto c : word1) {
                        for(auto x : c) {
                                a += x;
                        }
                }

                for(auto c : word2) {
                        for(auto x : c) {
                                b += x;
                        }
                }

                return a == b;
        }
};