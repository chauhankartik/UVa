#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int t; cin >> t;
        while(t--) {
                string s; cin >> s;
                int ans;

                int suf0 = 0, suf1 = 0;
                // make whole str 0/1
                for(auto c : s) {
                        suf0 += (c == '0');
                        suf1 += (c == '1');
                }

                ans = min(suf0, suf1);
                
                // make str 0*1*
                int pref0 = 0, pref1 = 0;
                        
                // make str 1*0*
        }
        return 0;
}