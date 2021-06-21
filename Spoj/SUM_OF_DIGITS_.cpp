#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int res = 0;
        for(auto c : s) res += c - '0';
        cout << res << endl;
    }
}