#include<bits/stdc++.h>
using namespace std;

// number of subarrays with given sum
// negative weights allowed
// O(n) time
// O(n) space
class Solution {
  public:
    int subArraySum(int a[], int n, int sum) {
        map<int, int> hash;
        int current = 0;
        int res = 0;
        hash[0] = -1;
        for(int i = 0; i < n; i++) {
            current += a[i];
            if(current == sum) res += 1;
            if(hash.find(current - sum) != hash.end()) res += 1;
            hash[current] = i;
        }
        return res;
    }
};

/*
    Fail test case : 
    29
    4 3 2 -7 10 -7 -7 8 -3 -5 -9 9 9 10 0 -4 0 9 8 -9 10 -9 -4 4 3 -10 -4 -7 -2
    -3

    Correct ans : 7
*/

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum; cin >> sum;
    Solution o; 
    cout << o.subArraySum(a, n, sum) << endl;
}