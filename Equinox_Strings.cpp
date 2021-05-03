#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int t; cin >> t;
        set<char> check = {'E', 'Q', 'N', 'U', 'I', 'O', 'X'};
        while(t--) {
                int n,a,b; cin >> n >> a >> b;                
                int sarthak = 0, anuradha = 0;
                while(n--) {
                        string s; cin >> s;
                        if(check.find(s[0])!=check.end())
                                sarthak += a;
                        else 
                                anuradha += b;
                }

                if(sarthak == anuradha)
                        cout << "DRAW" << endl;
                else {
                        if(sarthak > anuradha)
                                cout << "SARTHAK" << endl;
                        else
                                cout << "ANURADHA" << endl;
                }
        } 
        return 0;
}