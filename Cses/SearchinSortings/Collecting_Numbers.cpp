#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    set<int> mp;
    for(int i = 0; i < n; i++) {
        if(mp.find(a[i] + 1) != mp.end()) {
            res += 1;
            mp.insert(a[i]);
        }
        else {
            mp.insert(a[i]);
        }
    }
    cout << res + 1 << endl;
}