#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> adj[100005]; 

vector<bool> visited(100005);

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

int32_t main() {

        int n;
        int e; cin >> n >> e;
        for(int i = 0; i < e; i++) {
                int u, v; cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }

        int res = 0;

        for(int i = 1; i <= n; i++) {
                if(visited[i] == 0) {
                        res += 1;
                        dfs(i);
                }
        }

        cout << res << endl;
        return 0;
}