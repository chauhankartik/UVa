#include<bits/stdc++.h>
using namespace std;
#define int long long int
int low, high;

int32_t main() {
    int n; cin >> n;
    vector<int> vec(n);
    for(auto &c : vec) cin >> c;
    vector<int> s1, s2;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                s1.push_back((vec[i]*vec[j]) + vec[k]);
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                if(vec[k] == 0) continue;
                s2.push_back((vec[i]+vec[j]) * vec[k]);
            }
        }
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int res = 0LL;

    for(int i = 0; i < s1.size(); ++i) {
        low = lower_bound(s2.begin(), s2.end(), s1[i]) - s2.begin();
        high = upper_bound(s2.begin(), s2.end(), s1[i]) - s2.begin();
        res += (high - low);
    }

    cout << res << endl;
    return 0;
}