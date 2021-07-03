#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkBin(string s) {
        for(auto& c : s) {
            if(c != '0' || c != '1') return false;
        }
        return true;
    }

    int minPartitions(string n) {
        if(checkBin(n)) return 0;

        int num = stoi(n);

        int i = 1;
        while(i <= num) {
            if(i * 10 <= num) {
                i *= 10;
            }
            if(i + 1 <= num) {
                i += 1;
            }
            if(i * 10 > num) break;
        }
        int res = 0;
        //cout << i << endl;
        res += (num / i) + (num % i);
        return res;
    }
};