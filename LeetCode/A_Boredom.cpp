#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n; cin >> n;
        vector<int> a(n);
        int mx = -1;
        for(int i = 0; i < n; i++) {
                cin >> a[i];
                mx = max(mx, a[i]);
        }

        int dp[mx + 5], cnt[mx+5];
        memset(cnt, 0, sizeof cnt);
        memset(dp, 0, sizeof dp);

        for(auto x : a) cnt[x] += 1;
        dp[0] = 0;
        dp[1] = cnt[1]; //  1 * cnt[i]

        for(int i = mx; i >= 2; i--) {
                dp[i] = max(cnt[i]*i + dp[i - 2], dp[i - 1]);
        }

        cout << dp[mx] << endl;

        return 0;
}