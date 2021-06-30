#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[1000005];

int binarySearch(int l, int h, int n) {
    int ans = 0;
    while(l <= h) {
        int mid = l + (h - l) / 2;
        if(dp[mid] <= n) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return ans;
}

int32_t main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    memset(dp, 0, sizeof dp);
    dp[1] = 2;
    dp[2] = 7;
    for(int i = 3; i <= 1000000; i++) {
        dp[i] = dp[i-1] + (i*2) + (i-1);
    }
    while(t--) {
        int n; cin >> n;
        int l = 0, h = 1000000;
        int res = 0;
        while(n >= 2) {
            int idx = binarySearch(l, h, n);
            res += 1;
            n -= dp[idx];
        }
        cout << res << endl;
    }
    return 0;
}