#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int j = 0; j < m; j++) {
        cin >> b[j];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int res = 0;

    for(int i = 0, j = 0; i < n && j < m;) {
        if(abs(a[i] - b[j]) <= k) {
            res += 1;
            i += 1;
            j += 1;
        }
        else if(a[i] - k > b[j]) j += 1;
        else i += 1;
    }

    cout << res << endl;
}