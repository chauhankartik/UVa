/*
        user : kartikchauhan
        date : 26 Apr 2021
        --GO-AWAY-COVID-19--
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t; cin >> t;
        while(t--) {
                int n; cin >> n;
                int a; set<int> s;
                for(int i = 0; i < n; i++) {
                        cin >> a;
                        s.insert(a);
                }
                if(s.size() == n) {
                        cout << "NO" << endl;
                } else {
                        cout << "YES" << endl;
                }
        }
        return 0;
}