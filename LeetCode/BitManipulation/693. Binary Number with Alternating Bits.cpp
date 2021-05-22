#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool hasAlternatingBits(int n) {
                bool last = (n & 1);
                while(n != 0) {
                        n >>= 1;
                        bool curr = n & 1;
                        if(last == curr)
                                return false;
                        last = curr;
                }
                return true;
        }
};


int main() {

}