#include<bits/stdc++.h>
using namespace std;
#define int long long int

int b[1005];

void __solve() 
{
    int n;
    while(scanf("%lld", &n) && n) 
    {
        memset(b, 0, sizeof(b));
        bool flag = false;
        int a[n][2];
        for(int i = 0; i < n; i++) {
            scanf("%lld %lld", &a[i][0], &a[i][1]);
        }
        for(int i = 0; i < n; i++) {
            int pos = i + a[i][1];
            if(pos >= 0 && pos < n && b[pos] == 0) {
                b[pos] = a[i][0];
            } 
            else {
                cout << -1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag) {
            for(int i = 0; i < n - 1; i++) {
                printf("%lld ", b[i]);
            }
            printf("%lld\n", b[n-1]);
        }
    }
}

int32_t main() 
{
    int t; t = 1;
    while(t--) {
        __solve();
    }
    return 0;
}