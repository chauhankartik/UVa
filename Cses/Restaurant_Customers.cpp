#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int n; cin >> n;
    vector<pair<int, int>> time(n);
    for(auto& c : time) {
        cin >> c.first >> c.second;
    }
    
    sort(time.begin(), time.end());

    int res = 0;
    int local = 0;

    for(int i = 1; i < n; i++) {
        if(time[i].first <= time[i-1].second) {
            local += 1;
            res = max(res, local);
        }
        else {
            // res = max(res, local);
            local = 0;
        }
    }
    cout << res << endl;
    return 0;
}