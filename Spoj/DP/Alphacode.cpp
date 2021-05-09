#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int n;
        while(scanf("%lld", &n) == 1 && n != 0) {
                vector<int> dp(to_string(n).length()+1, 0);
                string s = to_string(n);
                dp[0] = 1;

                for(int i = 1; i < s.length(); i++) {
                        if(s[i] == '0' && s[i-1] == '0') {
                                dp[i] = -1;
                                break;
                        }
                        else if(s[i] == '0' && (s[i-1] == '1' || s[i-1] == '2'))
                                dp[i] += 1;
                        else if(s[i] == '0' && (s[i-1] != '1' && s[i-2] != '2')) {
                                dp[i] = -1;
                                break;
                        }
                        else if(s[i] != 0) {
                                if(s[i-1] == '1') {
                                        dp[i] += 1;
                                }
                                else if(s[i-1] == '2' && (s[i] - '0' <= 6)) {
                                        dp[i] += 1;
                                }      
                        }
                }
                int res = 0;
                bool flag = false;
                for(int i = 0; i < dp.size(); i++) {
                        if(dp[i] == -1) {
                                cout << 0 << endl;
                                flag = true;
                        }
                        else res += dp[i];
                }
                if(!flag)
                        cout << res << endl;
        }
        return 0;
}