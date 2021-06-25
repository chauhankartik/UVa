#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int D, d, p, q;
        cin >> D >> d >> p >> q;
        long long int res = 0;
        int k = D / d;
        res += min(D, d) * p;
        if(k > 0) {
            res += ((k - 1) * ((d * p)) + ((k) * (k - 1) * q * d) / 2);
            res += (D - d * k) * (p + k * q);
        }
        cout << res << endl;
    }
}