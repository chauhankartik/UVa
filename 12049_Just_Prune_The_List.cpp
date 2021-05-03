#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int32_t main(){

        int t; cin >> t;
        while (t--)
        {
                int n, m;
                cin >> n >> m;
                int x;
                map<int, int> mp;
                for(int i = 0; i < n; i++) {
                        cin >> x;
                        mp[x]++;
                }
                for(int i = 0; i < m; i++) {
                        cin >> x;
                        mp[x]--;
                }
                int res = 0;
                for(auto c : mp) {
                        res += abs(c.second);
                }
                cout << res << endl;
        }
        
        return 0;
}