#include<bits/stdc++.h>
using namespace std;


static int parseint(void)
{
    int c, n;

    n = getchar_unlocked() - '0';
    while (isdigit((c = getchar_unlocked())))
        n = 10*n + c-'0';

    return n;
}

int main()
{       
        int n, sum;
        int MOD = 1e9 + 7;

        
        n = parseint();
        sum = parseint();
        vector<int> coins(n);

        for(int i = 0; i < n; i++) coins[i] = parseint();

        vector<int> dp(sum+1, 0);
        dp[0] = 1;

        /*
                dp[i] -> Min coins sum up to i.
        */

        for(int i = 1; i <= sum; i++) {
                for(int j = 0; j < n; j++) {
                        if(i - coins[j] >= 0)
                                (dp[i] += dp[i - coins[j]]) %= MOD;
                }
        }

        printf("%d", dp[sum]);
        return 0;
}
