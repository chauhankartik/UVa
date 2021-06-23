#include <bits/stdc++.h>
using namespace std;

/*
    Diameter of a tree:
    @ 2 - BFS approach

*/

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;

    vector<int> adj[n];
    int visited[n];
    int d[n];
    memset(d, 0, sizeof d);
    memset(visited, 0, sizeof visited);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // bfs - 1
    queue<int> q;
    q.push(0);
    visited[0] = 1;
    while (!q.empty())
    {
        int src = q.front();
        q.pop();

        for (auto u : adj[src])
        {
            if (!visited[u])
            {
                visited[u] = 1;
                q.push(u);
                d[u] = d[src] + 1;
            }
        }
    }

    int idx = -1;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (res < d[i])
        {
            res = d[i];
            idx = i;
        }
    }

    memset(d, 0, sizeof d);
    memset(visited, 0, sizeof visited);

    q.push(idx);
    visited[idx] = 1;

    while (!q.empty())
    {
        int src = q.front();
        q.pop();

        for (auto u : adj[src])
        {
            if (!visited[u])
            {
                visited[u] = 1;
                q.push(u);
                d[u] = d[src] + 1;
            }
        }
    }

    res = -1;

    for (int i = 0; i < n; i++)
    {
        if (res < d[i])
        {
            res = d[i];
            idx = i;
        }
    }

    cout << res << endl;
    return 0;
}