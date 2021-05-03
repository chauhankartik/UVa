#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define sc(n) scanf("%lld", &n)

void __solve()
{
    int n; sc(n);
    char a[n][n];
    int x_1 = -1, x_2 = -1, y_1, y_2, x_3, x_4, y_3, y_4;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            sc(a[i][j]);
            if(a[i][j] == '*')
            {
                if(x_1 == -1) x_1 = i, y_1 = j;
                else x_2 = i, y_2 = j;
            } 
        }

    // same row
    if(x_1 == x_2) {
        y_3 = y_1;
        y_4 = y_2;
        if(x_1 < n - 1) {
            x_3 = x_1 + 1;
            x_4 = x_1 + 1;
        } else {
            x_3 = x_1 - 1;
            x_4 = x_3;
        }
    }
    // same column
    else if(y_1 == y_2) {
        x_3 = x_4 = x_1;
        if(y_1 < n - 1) {
            y_3 = y_4 = y_1 + 1;
        } else {
            y_3 = y_4 = y_1 - 1;
        }
    }
    // other
    else {
        
    }
}

int32_t main()
{
    int t; sc(t);
    while(t--)
    {
        __solve();
    }
    return 0;
}