#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define scn(n) scanf("%lld", &n)

void __solve()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) scn(a[i])
        ;
    int common;
    if(a[0] == a[n-1])
        common = a[0];
    else {
        if(a[0] == a[1]) {
            common = a[0];
        } else {
            common = a[n-1];
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] != common) {
            printf("%lld\n", i+1);
        }
    }
}

int32_t main()
{
    int t; scanf("%lld", &t);
    while(t--)
    {
        __solve();
    }
    return 0;
}