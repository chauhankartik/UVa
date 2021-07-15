#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {

    int n, m; cin >> n >> m;
    multiset<int> t;
    for(int i = 0; i < n; ++i) {
        int k; cin >> k;
        t.insert(k);
    }

    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        auto it = t.upper_bound(x);
        if(it == t.begin()) cout << "-1\n";
        else {
            cout << *(--it) << endl;
            t.erase(it);
        }
    }
    return 0;
}