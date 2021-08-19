#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> subarraySum(int a[], int n, int s) {
        int i = 0, j = 0, sum = 0;
        vector<int> res;
        for(j = 0; j < n; j++) {
            sum += a[j];
            if(sum == s) break;
            else if(sum > s) {
                while(sum > s) {
                    sum -= a[i];
                    i += 1;
                }
                if(sum == s) break;
            }
        }
        if(sum == s) res.push_back(i+1), res.push_back(j+1);
        else res.push_back(-1);
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