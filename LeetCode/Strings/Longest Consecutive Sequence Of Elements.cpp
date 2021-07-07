#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v(n);
    for(auto &c : v) cin >> c;

    unordered_map<int, int> mp;
    for(const auto& c : v) {
        mp[c] += 1;
    }

    unordered_map<int, int> :: iterator it;
    it = mp.begin();
    vector<int> res;
    
    return 0;
}