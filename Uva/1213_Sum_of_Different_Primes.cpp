#include<bits/stdc++.h>
using namespace std;

void __solve(const int n, 
             const int k,
             const vector<int> &prime)
{
        int sz = prime.size();
        int dp[1122][15];
        memset(dp, 0, sizeof dp);
        dp[0][0] = 1;
        for(int i = 0; i < sz; i++) {
                for(int j = 1120; j >= prime[i]; j--) {
                        for(int k = 1; k < 15; k++) {
                                dp[j][k] += dp[ j - prime[i]][k - 1];
                        }
                }
        }
        cout << dp[n][k] << endl;
}

int main() {

        int n, k; cin >> n >> k;
        vector<bool> primes(1200, true);

        primes[0] = false;
        primes[1] = false;
        for(int i = 2; i <= sqrt(1200); i ++) {
                if(primes[i])
                {
                        for(int p = i * 2; p < 1200; p += i)
                                primes[p] = false;
                }
        }

        vector<int> prime;
        for(int i = 2; i < 1123; i++) {
                if(primes[i] == true) prime.push_back(i);
        }
        
        while(n > 0 && k > 0)
        {       
               
                __solve(n, k, prime);
                cin >> n >> k;
        }
        return 0;
}