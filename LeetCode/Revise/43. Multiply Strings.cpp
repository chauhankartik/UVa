#include<bits/stdc++.h>
using namespace std;

/*
        very very long integers

*/
class Solution {
public:
        string multiply(string num1, string num2) {
                long long int m, n;
                m = stoll(num1);
                n = stoll(num2);
                m = m * n;
                return to_string(m);
        }
};

int main() {
        return 0;
}