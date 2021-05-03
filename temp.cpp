#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int n; scanf("%lld", &n);
        vector<int> stock(n), res(n);
        for(auto &c : stock) cin >> c;
        for(int i = n - 1; i >= 0; i--) {
                int idx = i;
                int cnt = 1;
                for(int j = i - 1; j >= 0; j--) {
                        if(stock[i] >= stock[j]) {
                                cnt++;
                        } else {
                                break;
                        }
                }
                res[idx] = cnt;
        }
        for(auto c : res) {
                cout << c << " ";
        }
        cout << endl;
        return 0;
}