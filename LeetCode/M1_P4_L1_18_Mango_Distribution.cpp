#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define hell 1000000007

int fac[1000005];

int C(int n, int r) {
    if(r > n - r) r = n - r;
    int ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i % hell;
        ans /= i;
    }

    return ans;
}

void cal_fac() {
    fac[0] = 1;
    fac[1] = 1;
    for(int i = 2; i <= 1000001; i++) {
        fac[i] = i * fac[i-1] % hell;
    }
}

int32_t main() {

    int n, m; cin >> n >> m;
    cal_fac();
    cout << (((C(m+n-1, n-1) * fac[n-1]) % hell) / fac[m]) << endl;
}
