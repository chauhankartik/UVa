#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> v) {
        vector<int> cache(n+1);
        cache = v;
        for(int i = 1; i < n; i++) {
                int element = v[i];
                for(int j = 0; j < i; j++) {
                        if(element >= v[j]) {
                                cache[i] = max(cache[i], cache[j]+element);
                        }
                }
        }
        return *max_element(cache.begin(), cache.end());
}

int main() {
        int n; cin >> n;
        vector<int> v(n);
        for(auto &c : v) cin >> c;
        cout << solve(n, v) << endl;
        return 0;
}
