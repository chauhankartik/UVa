#include <bits/stdc++.h>
using namespace std;
#define int long long int

int vis[100001];
vector<int> adj[100001];

void dfs(int v)
{
    vis[v] = true;
    for (int u : adj[v])
    {
        if (!vis[u])
            dfs(u);
    }
}

int32_t main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        a -= 1;
        b -= 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int components = 0;
    vector<pair<int, int>> q;
    for (int i = 0; i < n; ++i)
    {
        if (vis[i] == false)
        {
            dfs(i);
            components += 1;
            q.push_back({components, i + 1});
        }
    }
    components = components - 1;
    cout << components << endl;
    for (int i = 1; i < q.size(); ++i)
    {
        cout << q[i - 1].second << " " << q[i].second << endl;
    }
    return 0;
}