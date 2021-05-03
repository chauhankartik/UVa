#include<bits/stdc++.h>
using namespace std;

#define int long long int

void __solve()
{
    int r, x, y;
    scanf("%lld %lld %lld", &r, &x, &y);
    double distance = sqrt(x*x+y*y);
    if(distance == r) {
        printf("1\n");
    } else if(distance <= 2*r) {
        printf("2\n");
    } else {
        cout << ceil(distance/r) << endl;
    }
}

int32_t main() 
{
    __solve(); 
    return 0;
}