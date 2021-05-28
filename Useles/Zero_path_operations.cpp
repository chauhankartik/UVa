#include<bits/stdc++.h>
using namespace std;
#define int long long int

int adj[123456];
int weight[123456];

int32_t main() {

        ios_base::sync_with_stdio(false), cin.tie(0);
        int t; cin >> t;
        while (t--)
        {       
                memset(adj, 0, sizeof adj);
                memset(weight, 0, sizeof weight);
                int n; cin >> n;
                for(int i = 0, u, v; i < n - 1; i++) {
                        cin >> u >> v;
                        adj[u] += 1;
                        adj[v] += 1;
                }                

                int res = 0;

                for(int i = 1; i <= n; i++) {
                        cin >> weight[i];
                        if(adj[i] >= 2 && weight[i]) res += 1;
                }

                cout << res << endl;
        }
        
        return 0;
}