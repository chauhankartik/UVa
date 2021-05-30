#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int X, A, B; cin >> X >> A >> B;
        int max_size = 100 - X;
        int ans = A + ((max_size) * B);
        cout << ans * 10 << endl;
    }
    return 0;
}