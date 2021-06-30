#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n, k, s;
        cin >> n >> k >> s;

        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        int ma = -1;       
        for(int i = 0; i < n; i++) {
            int start = v[i].first;
            int end = (i-1 >= 0) ? v[i-1].second : 0;
            ma = max(ma, end);
            if(start - ma > 0) {
                k -= (start - ma);
            }

            if(k <= 0) break;
        }
        
        k -= (s - max(v[n-1].second, ma));
        if(k <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}