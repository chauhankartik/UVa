#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int N = 2e3 + 10;
int memo[N][N], a[N];

int dp(int l, int r) {
    if(memo[l][r] != -1)
        return memo[l][r];
    if(l == r) 
        return 0;
    return memo[l][r] = a[r] - a[l] + min(dp(l+1, r), dp(l, r-1));
}

int32_t main() {

    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    memset(memo, -1, sizeof memo);
    cout << dp(0, n-1) << endl;
    return 0;
}