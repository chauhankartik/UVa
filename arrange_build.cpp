#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dp_p[100];
int dp_b[100];

int solve(int n) {
        dp_p[1] = 1;
        dp_b[1] = 1;
        for(int i = 2; i <= n; i++) {
                dp_p[i] = dp_p[i-1] + dp_b[i-1];
                dp_b[i] = dp_p[i-1];
        }
        int cache = dp_p[n] + dp_b[n];
        return cache*cache;
}

int32_t main() {
        int n;
        cin >> n;
        cout << solve(n) << endl;
        return 0;
}