#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t; cin >> t;
    while(t--) {
        int l; cin >> l;
        string s; cin >> s;
        vector<int> v(l+1);
        int good = 0;

        (s[0] == '1') ? good += 1 : good = 0;

        v[1] = good;

        for(int i = 1; i < s.length(); i++) {
            (s[i] == '1') ? good = v[i] + 1 : good = v[i];
            v[i+1] = good;
        }

        bool f = true;

        for(int i = 1; i <= l; i++) {
            if(v[i] >= (i+1) / 2) {
                cout << "YES" << endl;
                f = false;
                break;
            }
        }

        if(f) {
            cout << "NO" << endl;
        }
    }
    return 0;
}