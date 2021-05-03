#include<bits/stdc++.h>
using namespace std;

int main() {

        int n; cin >> n;
        int dp[n+1];
        int res = 0;
        dp[0] = 1;
        int i = 1;
        for(i = 1; i*i <= n; i++) {
                dp[i] = i * i;
        }
        if(i*i == n) cout << 1 << endl;
        else {
                --i;
                while(i > 1 && n != 0) {
                        if(n/dp[i] > 0) {
                                res += (n / dp[i]);
                                n = n % dp[i];
                        }
                        else {
                                i--;
                        }
                        if(i == 1) {
                                res += n ;
                                break;
                        }
                }
        }
        cout << res << endl;
        return 0;
}