#include<bits/stdc++.h>
using namespace std;

int solve(vector<pair<int, int>> a, int n) {

        vector<int> dp(n, 1);

        sort(a.begin(), a.end());

        for(int i = 1; i < a.size(); i++) {
                for(int j = 0; j < i; j++) {
                        if(a[i].second > a[j].second) {
                                dp[i] = max(dp[i], 1 + dp[j]);
                        }
                }
        }

        return *max_element(dp.begin(), dp.end());
}

int main() {

        int n; cin >> n;
        vector<pair<int, int>> envelopes;
        for(int i = 0,x, y; i < n; i++) {
                cin >> x >> y;
                envelopes.push_back({x,y});
        }
        cout << solve(envelopes, n) << endl;
        return 0;
}