#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define N 1000007

vector<int> adj[N]; 

queue<int> q;
int visited[N];
int dist[N];

bool bfs(int s, int max_distance) {
        memset(visited, -1, sizeof visited);
        visited[s] = s;
        dist[s] = 0;
        q.push(s);
        while(!q.empty()) {
                int x = q.front(); q.pop();
                // process node x
                for(auto c : adj[x]) {
                        if(visited[c] != -1 && visited[c] != s) return false;
                        if(visited[c] != -1 && visited[c] == s) return true;
                        dist[c] = 1 + dist[x];
                        if(dist[c] <= max_distance) {
                                visited[c] = s;
                        }
                        q.push(c);
                }
        }
        return true;
}


int32_t main() {

        int t; cin >> t;
        while(t--) {
                int n, r, m; cin >> n >> r >> m;
                for(int i = 0, u, v; i < r; i++) {
                        cin >> u >> v;
                        adj[u - 1].push_back(v - 1);
                        adj[v - 1].push_back(u - 1);
                }

                vector<pair<int, int>> army;
                for(int i = 0,_s,d; i < m; i++) {
                        cin >> _s >> d;
                        army.push_back({_s - 1, d});
                }

                bool res = true;

                for(int i = 0; i < m; i++) {
                        res = bfs(army[i].first, army[i].second);
                        if(res == false) {
                                break;
                        }
                }

                for(int i = 0; i < n; i++) {
                        if(visited[i] == -1) res = false;
                }

                if(res) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }

                memset(visited, -1, sizeof visited);
                for(int i = 0; i < n; i++) {
                        adj[i].clear();
                }
                memset(dist, 0,sizeof dist);
        }
        return 0;
}