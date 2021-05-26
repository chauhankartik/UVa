#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int t; cin >> t;
        while(t--) {
                int n; cin >> n;
                int res = 0;
                vector<int> v(n);
                for(auto &c : v) cin >> c;
                for(int i = 1; i < n; i++) {
                        res += abs(v[i] - v[i-1]) - 1;
                }
                cout << res << endl;
        }
        return 0;
}