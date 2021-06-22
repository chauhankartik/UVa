#include <bits/stdc++.h>
using namespace std;

// bipartite division -- graph coloring using 2 colors
vector<int> color(100001, -1);
vector<int> adj[100001];
int visited[100001];

int flag = 1;

void dfs(int v, int col)
{
    visited[v] = true;
    color[v] = col;
    for (auto u : adj[v])
    {
        if (!visited[u])
        {
            visited[u];
            dfs(u, 1 - col);
        }
        else
        {
            if (color[u] == color[v])
            {
                flag = 0;
                return;
            }
        }
    }
}

int32_t main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int a, b;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        a -= 1;
        b -= 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i, 1);
    }

    if (flag)
    {
        for (int i = 0; i < n; ++i)
        {
            if (color[i] == 1)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    cout << endl;
    return 0;
}