#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int hammingDistance(int x, int y) {
                int res = 0;
                for(int i = 0; i < 32; i++) {
                        int k = x & (1 << i);
                        int l = y & (1 << i);
                        if(k != l) res += 1;
                }
                return res;
        }
};

int main() {

}