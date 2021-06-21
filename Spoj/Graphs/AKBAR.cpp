#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define N 1000007

vector<int> adj[N]; 

queue<pair<int, int>> q;
int visited[N];
int parent[N];

bool bfs(int s, int max_distance) {
        if(visited[s]) return false;
        visited[s] = 1;
        q.push({s,max_distance});
        parent[s] = s;
        while(!q.empty()) {
                int source = q.front().first;
                int d = q.front().second;
                q.pop();

                if(d > 0) {
                        for(auto u : adj[source]) {
                                if(!visited[u]) {
                                        visited[u] = 1;
                                        q.push({u, d-1});
                                        parent[u] = s;
                                }
                                else if(visited[u] && parent[u] != s) {
                                        return false;
                                }
                        }
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
                for(int i = 0,city,d; i < m; i++) {
                        cin >> city >> d;
                        army.push_back({city-1, d});
                }

                bool res = true;

                for(int i = 0; i < m; i++) {
                        res = bfs(army[i].first, army[i].second);
                        // cout << army[i].first << " " << army[i].second << endl;
                        if(res == false) {
                                break;
                        }
                }

                for(int i = 0; i < n; i++) {
                        if(visited[i] == 0) res = false;
                }

                if(res) {
                        cout << "Yes" << endl;
                }
                else {
                        cout << "No" << endl;
                }

                memset(visited, 0, sizeof visited);
                for(int i = 0; i < n; i++) {
                        adj[i].clear();
                }
                memset(parent, 0, sizeof parent);
        }
        return 0;
}