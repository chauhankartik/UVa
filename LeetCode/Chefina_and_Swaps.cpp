#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {

        int t; cin >> t;
        while (t--)
        {
                int n; cin >> n;
                vector<int> a(n), b(n);
                for(int i = 0; i < n; i++) cin >> a[i];
                for(int i = 0; i < n; i++) cin >> b[i];

                sort(a.begin(), a.end());
                sort(b.begin(), b.end());

                int small = min(a[0], b[0]);

                int i = 0, j = 0;
                int res = 0;

                map<int, int> mp;
                for(int i = 0; i < n; i++) {
                        mp[a[i]] += 1;
                        mp[b[i]] -= 1;
                }

                bool valid = true;
                for(auto c : mp) {
                        if(abs(c.second) & 1) {
                                cout << -1 << endl;
                                valid = false;
                                break;
                        }
                }

                if(valid) {
                        a.clear(), b.clear();
                        for(auto c : mp) {
                                if(c.second > 0) {
                                        int x = c.second;
                                        x /= 2;
                                        while(x--) a.push_back(c.first);
                                }
                                else if(c.second < 0) {
                                        int x = abs(c.second);
                                        x /= 2;
                                        while(x--) b.push_back(c.first);
                                }
                        }

                        reverse(b.begin(), b.end());
                        int res = 0;

                        for(int i = 0; i < a.size(); i++) {
                                res += min(2*small, min(a[i], b[i]));
                        }
                        cout << res << endl;
                }
        }
        return 0;
}