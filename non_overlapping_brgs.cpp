#include<bits/stdc++.h>
using namespace std;

int solve(vector<pair<int,int>> &a, int n)
{
        vector<int> dp(n, 1);

        sort(a.begin(), a.end());
        for(int i = 1; i < n; i++) {
                for(int j = 0; j < i; j++) {
                        if(a[i].second >= a[j].second) {
                                dp[i] = max(dp[i], 1+dp[j]);
                        }
                }
        }
        return *max_element(dp.begin(), dp.end());
}

int main() {

        int n; cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
        cout << solve(a, n) << endl;
        return 0;
}