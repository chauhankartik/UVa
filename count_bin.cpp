#include<bits/stdc++.h>
using namespace std;

int dp0[100];
int dp1[100];

int solve(int n) {
        dp0[1] = 1;
        dp1[1] = 1;
        for(int i = 2; i <= n; i++) {
                dp0[i] = dp1[i-1];
                dp1[i] = dp1[i-1] + dp0[i-1];
        }
        return (dp0[n] + dp1[n]);
}

int main() {
        int n; cin >> n;
        cout << solve(n) << endl;
        return 0;
}