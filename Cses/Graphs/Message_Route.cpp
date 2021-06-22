#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;
    int vis[n];
    memset(vis, 0, sizeof vis);
    q.push(0);
    vis[0] = 1;
    int route[n + 1];
    route[0] = -1;
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (auto u : adj[a])
        {
            if (!vis[u])
            {
                vis[u] = 1;
                q.push(u);
                route[u] = a;
            }
        }
    }

    if (vis[n - 1] == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> res;
        res.push_back(n);
        int vertex = n - 1;
        while (route[vertex] != -1)
        {
            res.push_back(route[vertex] + 1);
            vertex = route[vertex];
        }
        reverse(res.begin(), res.end());
        cout << res.size() << endl;
        for (auto &c : res)
            cout << c << " ";
    }
    return 0;
}