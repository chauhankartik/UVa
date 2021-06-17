#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    double n, m, a;
    cin >> n >> m >> a;
    int x = 0, y = 0;
    x = ceil(n / a);
    y = ceil(m / a);
    cout << x*y << endl;
    return 0;
}