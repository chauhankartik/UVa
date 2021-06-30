#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<int> v(k);
        for(auto &c : v) cin >> c;
        set<int> s, ans;
        for(int i = 0; i < k; i++) {
            if(s.find(v[i]) != s.end()) {
                if(v[i] <= n) ans.insert(v[i]);
            }
            else {
                s.insert(v[i]);
            }
        }

        cout << ans.size() << " ";
        for(auto c : ans) cout << c << " ";
        cout << endl;
    }
    return 0;
}