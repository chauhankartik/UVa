#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> a(n);
    for(auto &c : a) cin >> c;

    cin >> n;
    vector<int> b(n);
    for(auto &c : b) cin >> c;

    unordered_map<int, int> mp;
    for(auto c : a) {mp[c] += 1;}
    for(auto &c : b) {
        mp[c] -= 1;
        if(mp[c] >= 0) cout << c << endl;
    }
    return 0;
}