#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        int sumBase(int n, int k) {
                int res = 0;
                int i = 1, rem = 0;
                while(n != 0) {
                        rem = n % k;
                        res = (rem*i) + res;
                        n /= k;
                        i *= 10;
                }           
                int ans = 0;
                for(auto c : to_string(res)) ans += c - '0';
                return ans;  
        }
};

int main() {

}