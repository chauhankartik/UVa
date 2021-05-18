#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool arr[26];
        bool checkIfPangram(string sentence) {
                memset(arr, false, sizeof arr);
                for(auto c : sentence) {
                        arr[c - 'a'] = true;
                }
                for(auto c : arr) {
                        if(c == false)
                                return false;
                }
                return true;
        }
};

int main() {
        return 0;
}