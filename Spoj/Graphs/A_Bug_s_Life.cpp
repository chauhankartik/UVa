#include <bits/stdc++.h>
using namespace std;

/*graph coloring using dfs*/

int visited[20001];
vector<int> adj[2001];
int color[2001];
bool flag = false;

void dfs(int v, int col)
{
    visited[v] = 1;
    color[v] = col;
    for (auto u : adj[v])
    {
        if (!visited[u])
            dfs(u, 1 - col);
        else
        {
            if (color[u] == col)
            {
                flag = true;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    int senr = 0;
    while (t--)
    {
        memset(color, -1, sizeof color);
        memset(visited, 0, sizeof visited);
        flag = false;
        ++senr;
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            a -= 1;
            b -= 1;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for (int i = 0; i < n; ++i)
        {
            if (!visited[i])
            {
                dfs(i, 0);
                if (flag)
                    break;
            }
        }
        cout << "Scenario #" << senr << ":" << endl;
        if (flag)
        {
            cout << "Suspicious bugs found!" << endl;
        }
        else
        {
            cout << "No suspicious bugs found!" << endl;
        }
        for (int i = 0; i < n; i++)
            adj[i].clear();
    }
    return 0;
}