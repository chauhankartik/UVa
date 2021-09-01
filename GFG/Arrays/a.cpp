#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int n, k; cin >> n >> k;
    if(k == 1 || k == 4) cout << 0 << endl;
    if(k == 2 || k == 3) cout << 1 << endl;
    if(n & 1 && k >= 5) {
        if(k > ((1 << (n - 1)) - 4)) {
            k = k % 4;
            if(k == 0 || k == 1) cout << 0 << endl;
            else cout << 1 << endl;
        }
        else {
            k = k % 4;
            if(k == 0 || k == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    else if(k >= 5) {
        k = k % 4;
        if(k == 1 || k == 0) cout << 1 << endl;
        else cout << 0 << endl; 
    }
    return 0;
}