#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dp[300];

int solve(int a[], int n, int amt) {
    
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        int coin = a[i];
        for(int j = 0; j <= amt; j++) {
            if(j - coin >= 0 && dp[j - coin]) {
                dp[j] += dp[j - coin];
            }
        }
    }
    return dp[amt];
         
}

int32_t main() {
    
    int amt, n; cin >> amt >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a, n, amt) << endl;
    return 0;
}