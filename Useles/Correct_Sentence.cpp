#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v;
        for(int i = 0; i < n; i++) {
            string s; cin >> s;
            v.push_back(s);
        }

        bool flag = true;

        for(int k = 0; k < n; k++) {
            string str = v[k];

            if(str[0] >= 'a' && str[0] <= 'm') {
                for(int i = 0; i < str.length(); i++) {
                    if(str[i] > 'm' || str[i] < 'a') {
                        flag = false;
                    }
                }
            }
            else if(str[0] >= 'N' && str[0] <= 'Z') {
                for(int i = 0; i < str.length(); i++) {
                    if(str[i] < 'N' || str[i] > 'Z') flag = false;
                }
            }
            else {
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}