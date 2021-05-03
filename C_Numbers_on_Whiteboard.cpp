#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t; cin >> t;
        while(t--) {
                int n; cin >> n;
                multiset<int> ms;
                for(int i = 1; i<=n; i++) {
                        ms.insert(i);
                }
                vector<pair<int, int>> res;
                multiset<int> :: iterator it;
                for(int i = 0; i < n - 1; i++) {
                        it = ms.end();
                        it--;
                        int a = *it;
                        ms.erase(it);
                        it = ms.end();
                        it--;
                        int b = *it;
                        ms.erase(it);
                        ms.insert((a+b+1)/2);
                        res.push_back({a,b}); 
                }
                it = ms.begin();
                cout << *it << endl;
                for(auto c : res) {
                        cout << c.first << " " << c.second << endl;
                }
        }
        return 0;
}