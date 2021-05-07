#include<bits/stdc++.h>
using namespace std;


int main() {

        int sum; cin >> sum;

        vector<int> dp(sum+1, INT_MAX);

        dp[0] = 0;
        for(int i = 0; i <= sum; i++) {
                for(char c : to_string(i)) {
                        if(i - (c - '0') >= 0)
                                dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
                }
        }
        cout << dp[sum] << endl;
        return 0;
}