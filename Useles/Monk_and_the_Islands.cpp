#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> adj[10001];
int dist[10001];
int visited[10001];

int32_t main() {

    int t; cin >> t;
    while (t--)
    {
        memset(dist, 0, sizeof dist);
        memset(visited, 0, sizeof visited);
        for(int i = 0; i < 10001; ++i) adj[i].clear();
        int n, m; cin >> n >> m;
        while(m--) {
            int x, y; 
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        queue<int> q;
        q.push(1);
        visited[1] = 1;

        while(!q.empty()) {
            int src = q.front();
            q.pop();
            for(auto u : adj[src]) {
                if(!visited[u]) {
                    q.push(u);
                    visited[u] = true;
                    dist[u]= 1 + dist[src];
                }
            }
        }

        cout << dist[n] << endl;
    }
    
    return 0;
}