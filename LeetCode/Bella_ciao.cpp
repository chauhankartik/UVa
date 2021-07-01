#include<bits/stdc++.h>
using namespace std;

int timer[1005];
int processsed[1005];
vector<int> adj[1005];

int main() {

    ios_base::sync_with_stdio(false), cin.tie(0);
    int cas = 1; //cin >> cas;
    while(cas--) {
        int n, m, t, c; 
        cin >> n >> m >> t >> c;
        
        for(int i = 0; i < m; ++i) {
            int u, v; 
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        queue<pair<int, int>> q;
        q.push({1, 0});
        processsed[1] = 1;

        while(!q.empty()) {
            pair<int, int> a = q.front();
            q.pop();

            for(auto u : adj[a.first]) {
                if(processsed[u]) {continue;}
                processsed[u] = 1;
                if(c >= t)
                    timer[u] = a.second + c + t + t - c;
                else 
                    timer[u] = a.second + c + abs(t-c);
                q.push({u, timer[u]}); 
            }

        }

        if(c >= t)
            cout << timer[n] - (2*t - c) << endl;
        else
            cout << timer[n] - abs(t-c) << endl;
    
    }
    return 0;
}
