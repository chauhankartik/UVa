#include<bits/stdc++.h>
using namespace std;

int solve(const vector<int> &val,
          const vector<int> &weights,
          const int         &n,
          const int         &cap)
{
        vector<int> dp(n+1,0);

        for(int j = 1; j <= cap; j++) {
                int max = 0;
                for(int i = 0; i < n; i++) {
                        int value = val[i];
                        int weight = weights[i];

                        if(weight <= j) {
                                int rem = j - weight;
                                int rem_val = dp[rem];
                                int total = rem_val + value;

                                if(total > max)
                                        max = total;
                        }
                }
                dp[j] = max;
        }
        return dp[cap];
}

int main() {

        int n; cin >> n;
        vector<int> val(n), weights(n);
        for(auto &c : val) cin >> c;
        for(auto &c : weights) cin >> c;
        int cap; cin >> cap;
        cout << solve(val,weights,n, cap) << endl;
        return 0;
}