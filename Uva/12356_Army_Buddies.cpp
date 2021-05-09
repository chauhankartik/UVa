#include<bits/stdc++.h>
using namespace std;
#define int long long int

void __solve()
{
    int s, b;
    while(scanf("%lld %lld", &s, &b) && (s && b)) {
        int sol[s+1];
        for(int i=1; i<=s; i++) {
            sol[i] = i;
        }
        int low = INT64_MAX, high = -1;
        while(b--) {
            int l, r; 
            scanf("%lld %lld", &l, &r);
            if(l < low) {
                low = l;
                if(low - 1 >= 1) {
                    printf("%lld ", low - 1);
                } else {
                    printf("* ");
                }
            } else {
                if(low - 1 >= 1) {
                    printf("%lld ", low - 1);
                } else {
                    printf("* ");
                }
            }
            if(r > high) {
                high = r;
                if(high + 1 <= s) {
                    printf("%lld\n", high+1);
                } else {
                    printf("*\n");
                }
            } else {
                if(high + 1 <= s) {
                    printf("%lld\n", high+1);
                } else {
                    printf("*\n");
                }
            }
        }
        printf("-\n");
    }
}

int32_t main() 
{
    __solve();
    return 0;
}