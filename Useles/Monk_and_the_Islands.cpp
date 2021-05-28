#include<bits/stdc++.h>
using namespace std;
 
bool visited[12345];
int distance_[12345];
 
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        memset(visited, false, sizeof(visited));
        memset(distance_, 0, sizeof(distance_));
        vector<int> adj[n+1];
        int x, y;
        while(m--) {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
 
        queue<int> q;
        q.push(1);
        distance_[1] = 0;
        visited[1] = true;
        while(!q.empty()) {
            int s = q.front();
            q.pop();
            for(auto u : adj[s]) {
                if(visited[u]) continue;
                visited[u] = true;
                distance_[u] = distance_[s] + 1;
                q.push(u);
            }
        }
        cout << distance_[n] << endl;
    }
}