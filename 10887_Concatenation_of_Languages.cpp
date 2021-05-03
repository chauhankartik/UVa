#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t;scanf("%lld", &t);
        int cse = 0;
        while(t--) {
                int m, n;
                // scanf("%lld %lld", &m, &n);
                // getchar();
                cin >> m >> n;
                cin.ignore();
                vector<string> a(m), b(n);
                for(int i = 0; i < m; i++) getline(cin, a[i]);
                for(int i = 0; i < n; i++) getline(cin, b[i]);
                set<string> res;
                for(int i = 0; i < m; i++) {
                        for(int j = 0; j < n; j++) {
                                res.insert(a[i]+b[j]);
                        }
                }
                cout << "Case " << ++cse << ": " << res.size() << endl;
        }
        return 0;
}