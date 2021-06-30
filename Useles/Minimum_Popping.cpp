#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

    int t; cin >> t;
    while(t--) 
    {
        int n, m; cin >> n >> m;
        deque<int> q;
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            q.push_back(x);
        }

        set<int> a;
        for(int i = 0; i < n; i++) {
            a.insert(i+1);
        }

        auto x = q.begin();
        auto y = q.rbegin();

        int res = 0;
        int pen_f = 0, ped_b = 0;

        bool m1 = false, m2 = false;
        
        while(a.size()) {
            m1 = true;
            m2 = true;
            if(a.find(*x) != a.end()) {
                a.erase(*x);
                x += 1;
                res += pen_f + 1;
                pen_f = 0;
                if(a.size() == 0) break;
                m1 = false;
            }
            if(a.find(*y) != a.end()) {
                a.erase(*y);
                res += ped_b + 1;
                ped_b = 0;
                y += 1;
                if(a.size() == 0) break;
                m2 = false;
            }
            if(m1) {
                if(a.find(*x) == a.end()) {
                    x += 1;
                    pen_f += 1;
                }
            }
            if(m2) {            
                if(a.find(*y) == a.end()){
                    y += 1;
                    ped_b += 1;
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}