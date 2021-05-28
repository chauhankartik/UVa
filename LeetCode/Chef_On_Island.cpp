#include<bits/stdc++.h>
using namespace std;
using LL = long long int;
using ULL = unsigned long long;

int32_t main() {

        int t; cin >> t;
        while(t--) {
                double a[5];
                for(int i = 0; i < 5; i++) cin >> a[i];
                double food = a[0] / a[2];

                double water = a[1] / a[3];
                                
                double days = min(food, water);
                (days >= a[4]) ? cout << "YES\n" : cout << "NO\n";
        }
        return 0;
}