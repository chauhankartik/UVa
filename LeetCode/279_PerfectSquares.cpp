#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

        int helper(int&               n,
                   vector<int>&       v)
        {
                int dp[10001];
                memset(dp, INT_MAX, sizeof dp);

                dp[0] = 0;
                
                for(int i = 1; i <= n; i++) {
                        for(int j = 0; j < v.size(); j++) {
                                int sr = v[j];
                                if(i - sr >= 0) {
                                        dp[i] = min(dp[i], 1 + dp[i - sr]);
                                }
                        }
                }
                return dp[n];
        }

        int numSquares(int n) {
                vector<int> squares;
                for(int i = 1; pow(i, 2) <= n; i++) {
                        squares.push_back(pow(i, 2));
                }
                return helper(n, squares);
        }
};

int main() {
        int n; cin >> n;
        Solution o;
        cout << o.numSquares(n) << endl;
}