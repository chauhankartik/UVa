#include<bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    unordered_map<char, int> mp;
    int max = - 1;
    char res;
    for(auto c : s) {
        mp[c] += 1;
        if(max < mp[c]) {
            max = mp[c];
            res = c;
        }
    }
    cout << res << endl;
    return 0;
}