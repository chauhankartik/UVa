#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {

    int n, x; cin >> n >> x;
    vector<int> child(n);
    for(auto &c :child) cin >> c;
    sort(child.begin(), child.end());
    int res = 0;
    int i = 0, j = n - 1;
    int w = 0;
    int ctr = 0;
    while(i <= j) {
        while(w + child[j] <= x && j >= i) {
            w += child[j];
            j -= 1;
            ctr += 1;
            if(ctr == 2) break;
        }
        while(w + child[i] <= x && i <= j && ctr != 2) {
            w += child[i];
            i += 1;
            ctr += 1;
            if(ctr == 2) break;
        }
        w = 0;
        ctr = 0;
        res += 1;
    }
    cout << res << endl;
    return 0;
}