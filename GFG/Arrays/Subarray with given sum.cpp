#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> subarraySum(int a[], int n, int s) {
        int i = 0, j = 0;
        vector<int> res;
        int sum = 0;
        while (i < n)
        {
            
        }
        return res;
    }
};

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum; cin >> sum;
    Solution s;
    vector<int> res = s.subarraySum(a, n, sum);
    for(auto c : res) cout << c << " "; 
}