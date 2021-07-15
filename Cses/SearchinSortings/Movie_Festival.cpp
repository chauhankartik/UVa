#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int n; cin >> n;
    vector<pair<int, int>> movies(n);
    for(auto& c : movies) {
        cin >> c.second >> c.first;
    }
    sort(movies.begin(), movies.end());
    int ans = 0, cur = 0;
    for(int i = 0; i < n; i++) {
        if(movies[i].second >= cur) {
            ans += 1;
            cur = movies[i].first;
        }
    }

    cout << ans << "\n";
    return 0;
}