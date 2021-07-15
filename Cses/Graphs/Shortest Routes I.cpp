#include<bits/stdc++.h>
using namespace std;

#define int long long
constexpr long long inf = 1e18;
#define ff first
#define ss second
#define pb push_back
#define pii  pair<int, int>
#define BoostIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
constexpr int N = 1e5 + 10;

vector<pii> g[N];
vector<int> dis(N, inf), vis(N, 0);

void dijkstra() {
    priority_queue<pii, vector<pii>, greater<pii>> q;
    dis[1] = 0;
    q.push({0, 1});
    while(!q.empty()) {
        pii p = q.top();
        q.pop();
        if(vis[p.ss]) continue;
        vis[p.ss] = 1;

        for(auto &edge : g[p.ss]) {
            if(!vis[edge.ss]) {
                if(dis[edge.ff] > p.ff + edge.ss) {
                    dis[edge.ff] = p.ff + edge.ss;
                    q.push({dis[edge.ff], edge.ff});
                }
            }
        }
    }
}

int32_t main() {
    BoostIO;
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        g[a].push_back({b, c});
    }
    dijkstra();
    for(int i = 1; i <= n; i++) {
        cout << dis[i] << " ";
    }
}