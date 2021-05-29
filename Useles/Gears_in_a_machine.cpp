#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> adj[123456];
bool visited[123456];
int gear[123456];
int goodRotation[123456];
queue<int> q;

int32_t main() {

        int n, m, q; cin >> n >> m >> q;

        for(int i = 1; i <= n; i++) cin >> gear[i];
        while(m--) {
                int u,v; cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
        }

        goodRotation[1] = 1;
        

        while(q--) {
                int g1, g2, d1, d2;
                cin >> g1 >> g2 >> d1 >> d2;

        }
        return 0;
}