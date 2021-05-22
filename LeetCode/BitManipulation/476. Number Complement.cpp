#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int findComplement(int num) {
                long long int bits = floor(log2(num)) + 1;
                long long int a = 1;
                return((a << bits) - 1) ^ num;
        }
};

int main() {}