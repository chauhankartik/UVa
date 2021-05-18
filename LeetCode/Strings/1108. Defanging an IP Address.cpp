#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        string defangIPaddr(string address) {
                string res;
                for(auto c: address) {
                        if(c != '.') res += c;
                        else res += "[.]";
                }
                return res;
        }
};

int main() {

        return 0;
}