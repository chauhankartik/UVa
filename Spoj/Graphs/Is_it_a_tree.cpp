#include <bits/stdc++.h>
using namespace std;

int visited[10001];
int parent[10001];
vector<int> adj[10001];
bool cycle = false;

void dfs(int v, int p)
{

    visited[v] = 1;
    parent[v] = p;
    for (auto u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u, v);
        }
        else
        {
            if (u != p)
            {
                cycle = true;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        x -= 1;
        y -= 1;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
            dfs(i, -1);
        if (cycle)
            break;
    }

    if (!cycle)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}