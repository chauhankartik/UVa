#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
        int t; cin >> t;
        while(t--) {

                int n, m; cin >> n >> m; // destinantion
                int x, y; cin >> x >> y; // theif
                int a, b; cin >> a >> b; // police

                if(n <= x && m <= y) {
                        cout << "NO\n";
                }
                else {
                        float dist_theif = n - x + m - y;
                        float dist_police = max(n - a, m - b);
                        if(floor(dist_police) < dist_theif) {
                                cout << "NO\n";
                        } else {
                                cout << "YES\n";
                        }
                }
        }
        return 0;
}