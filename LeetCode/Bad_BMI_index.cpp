#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    std::cout.precision(6);
    int n; cin >> n;
    vector<long double> w(n), h(n);
    for(auto &c : w) cin >> c;
    for(auto &c : h) cin >> c;

    vector<long double> res;
    for(int i = 0; i < n; ++i) {
        long double temp = w[i] / (pow(h[i]/100.0, 2.0));
        if( temp > 18.5 && temp <= 24.9) {
            continue;
        }
        else if(temp <= 18.5 || temp > 24.9) {
            res.push_back(temp);
        }
    }

    sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++) {
        if(res[i] < 1.0) res[i] = 1.0;
        printf("%0.4Lf\n", res[i]);
    }
    return 0;
}