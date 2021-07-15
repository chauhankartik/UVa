#include<bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e18

int32_t main() {

    int n, m, q;
    cin >> n >> m >> q;
    int adj[n+1][n+1];
    memset(adj, 0, sizeof adj);

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        if(adj[a][b] != 0) {
            adj[a][b] = min(adj[a][b], c);
            adj[b][a] = min(adj[b][a], c);
        } else {
            adj[a][b] = c;
            adj[b][a] = c;
        }
    }
    int dis[n+1][n+1];

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) dis[i][j] = 0;
            else if(adj[i][j]) dis[i][j] = adj[i][j];
            else dis[i][j] = INF;
        }
    }

    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
    while(q--) {
        int a, b; cin >> a >> b;
        if(dis[a][b] != INF) {
            cout << dis[a][b] << endl;
        }else cout << -1 << endl;
    }
    return 0;
}