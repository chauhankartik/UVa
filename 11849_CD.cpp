#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int n, m; cin >> n >> m;
        while(n && m) {
                int res = 0;
                map<int, int> mp;
                for(int i = 0, x; i < n; i++) {
                        cin >> x;
                        mp[x]++;
                }

                for(int i = 0, x; i < m; i++) {
                        cin >> x;
                        mp[x]++;
                        if(mp[x] > 1) res++;
                }
                cout << res << endl;
                cin >> n >> m;
        }
        return 0;
}