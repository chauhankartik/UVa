#include<bits/stdc++.h>
using namespace std;

int dp[100];

int solve(int n, vector<int> value, vector<int> weight, int capacity) {
        dp[0] = 0;
        int val, w;
        for(int j = 1; j <= capacity; j++) {
                int max = 0;
                for(int i = 0; i < n; i++) {
                        val = value[i];
                        w = weight[i];
                        
                        if(w <= j) {
                                int rem = j - w;
                                int rem_value = dp[rem];
                                int total = rem_value + val;

                                if(total > max) {
                                        max = total;
                                }
                        }
                }
                dp[j] = max;
        }
        return dp[capacity];
}

int main() {

        int n; cin >> n;
        vector<int> value(n);
        for(auto &c : value) cin >> c;
        vector<int> weight(n);
        for(auto &c : weight) cin >> c;
        int capacity; cin >> capacity;
        cout << solve(n, value, weight, capacity) << endl;;
        return 0;
}