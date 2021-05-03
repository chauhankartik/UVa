#include<bits/stdc++.h>
using namespace std;
#define int long long int

int h[200007];
bool visited[200007];
vector<int> adj[100008];

void dfs(int src) {
        visited[src] = true;
        for(auto u : adj[src]) {
                if(!visited[u]) {
                        h[u] = 1 + h[src];
                        dfs(u);
                }
        }
}

int32_t main() {

        int n; cin >> n;
        for(int i = 0,u,v; i < n - 1; i++) {
                cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }

        h[1] = 1;
        dfs(1);

        int res = 0;

        for(auto c : h) res += c;

        cout << res << endl;
        return 0;
}