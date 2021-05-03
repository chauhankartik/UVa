#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ct = 0, cm = 0;
        int ok = 1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'T') ct++;
            if(s[i] == 'M') cm++;
            if(cm > ct || ct-cm>n/3) {
                ok = 0;
                break;
            }
        }
        if(ok && 2*cm == ct) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}