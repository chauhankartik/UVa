#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
vector<bool> visited(100001);
vector<int> parent(100001, -1);
int mark, beg;

bool dfs(int src, int p)
{
    visited[src] = 1;
    parent[src] = p;
    for (auto u : adj[src])
    {
        if (u == p)
            continue;
        if (visited[u])
        {
            mark = u;
            beg = src;
            return true;
        }
        if (!visited[u])
        {
            if (dfs(u, src))
                return true;
        }
    }
    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;
    /*
        dfs start from src and visiting src again and then backtrack;

        or detect cycle in graph


    */
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a -= 1;
        b -= 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            flag = dfs(i, -1);
            if (flag)
                break;
        }
    }

    if (!flag)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> res;
        res.push_back(mark + 1);
        while (beg != mark)
        {
            res.push_back(beg + 1);
            beg = parent[beg];
        }
        res.push_back(mark + 1);
        cout << res.size() << endl;
        for (auto c : res)
            cout << c << " ";
    }
    return 0;
}