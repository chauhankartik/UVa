#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t; cin >> t;
        while(t--) {
                vector<int> res;
                int n, m; cin >> n >> m;
                int x, y; cin >> x >> y;
                while(n--) {
                        string s; cin >> s;
                        int sol = 0, par = 0;
                        for(auto c : s) {
                                if(c == 'F') sol += 1;
                                else if(c == 'P') par += 1;
                        }
                        if(sol >= x || (sol == x - 1 && par >= y)) res.push_back(1);
                        else res.push_back(0);
                }
                for(auto c : res) cout << c;
                cout << "\n";
        }
}