#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t;
        cin>>t;
        while(t--) {

                int l;cin >> l;
                string s; cin >> s;
                int a[l+5] = {0};
                memset(a, 0, sizeof a);
                for(int i = 0; i < s.length(); i++) {
                        if(s[i] == '0')
                                a[i+1] = 0;
                        else 
                                a[i+1] = 1;
                }
                bool flag = false;
                a[1] = s[0] - '0';
                for(int i = 2; i <= l; i++) {
                        a[i] = a[i] + a[i - 1];
                }
                for(int i = 1; i <= l; i++) {
                        if(2*a[i] >= i) {
                                cout << "YES" << endl;
                                flag = true;
                                break;
                        }
                }
                if(!flag) {
                        cout << "NO" << endl;
                }
        }
        return 0;
}