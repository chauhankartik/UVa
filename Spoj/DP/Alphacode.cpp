#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dp[5005];
string str;

int solve(int pos, int len)
{       

        if(pos == len) return 1;
        if(str[pos] == '0') return 0;

        if(dp[pos] != -1) return dp[pos];

        dp[pos] = solve(pos + 1, len);
        if(pos + 1 < len)
        {
                if(str[pos] == '1') dp[pos] += solve(pos+2, len);
                else if(str[pos] == '2' && str[pos+1]<='6') dp[pos] += solve(pos+2, len);
        }

        return dp[pos];
}

int32_t main() {

        while(cin >> str && str.compare("0")) {
                memset(dp, -1, sizeof dp);
                printf("%lld\n", solve(0, str.length()));
        }
        return 0;
}