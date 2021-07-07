#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, n; cin >> a >> b >> n;
        int prev = a, curr = b;
        for(int i = 2; i <= n; i++) {
            int temp = prev ^ curr;
            prev = curr;
            curr = temp;
        }
        cout << curr << endl;
    }
    return 0;
}