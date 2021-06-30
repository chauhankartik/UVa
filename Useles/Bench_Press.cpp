#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n, w, r;
        cin >> n >> w >> r;
        vector<int> v(n);
        for(auto &c : v) cin >> c;
        sort(v.begin(), v.end());

        if(w <= r) {
            cout << "YES" << endl;
        }
        else {
            int rem = w - r;
            int idx = 0;
            while(idx < v.size() - 1) {
                if(v[idx] == v[idx + 1]) 
                    rem -= (2 * v[idx]);
                idx += 2;
            }

            if(rem <= 0) {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}