#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n; scanf("%lld", &n);
        vector<int> v(n);
        for(auto &c : v) cin >> c;
        vector<int> res(n);
        res[n-1] = v[n-1];
        for(int i = n - 2; i >= 0; i--) {
                res[i] = res[i+1] + v[i];
        }
        for (int i = 1; i < n; i++)
        {
                cout << res[i] << " ";
        }
        cout << 0 << endl;
        return 0;
}