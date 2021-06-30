#include<bits/stdc++.h>
using namespace std;
#define int long long int

#define mod 1000000007

int32_t main() {

    int n; cin >> n;
    vector<int> v(n);
    for(auto &c : v) cin >> c;
    int sum = 0;

    for(auto c : v) sum += c;
    sum %= mod;
    if(sum < 0) sum += mod;
    
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;

        sum = sum * 2;
        sum %= mod;

        cout << sum << endl;
    }
    return 0;
}