#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {

    vector<int> money(8);
    for(auto &c : money) cin >> c;
    int p; cin >> p;
    vector<pair<int, int>> v(p);
    for(int i = 0; i < p; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    int res = 0;
    set<int> not_go;

    for(int i = 0; i < p; ++i) {
        pair<int, int> pr = v[i];
        int a = pr.first;
        int b = pr.second;

        int temp = 0;
        // taking a;
        

        // taking b;

    }
    return 0;
}