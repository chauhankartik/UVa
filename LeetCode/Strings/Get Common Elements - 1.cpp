#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v(n);
    for(auto &c : v) cin >> c;
    cin >> n;
    vector<int> a(n);
    for(auto& c : a) cin >> c;

    unordered_map<int, int> mp;
    for(auto c : v) {
        mp[c] = 1;
    }

    for(auto c : a) {
        if(mp[c] == 1) {
            mp[c] -= 1;
            cout << c << " ";
        }
    }
}