#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

char getParent(int x, int y, int a, int b)
{
    if (y < b)
        return 'R';
    else if (y > b)
        return 'L';
    else if (x < a)
        return 'D';
    else
        return 'U';
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<string> adj;
    pair<int, int> parent[n][m];
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        adj.push_back(s);
    }

    int si, sj, fi, fj;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (adj[i][j] == 'B')
            {
                fi = i;
                fj = j;
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({si, sj});
    adj[si][sj] = '#';
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int xx = a + dx[i];
            int yy = b + dy[i];

            if (xx < 0 || xx >= n || yy < 0 || yy >= m)
                continue;
            if (adj[xx][yy] != '#')
            {
                q.push({xx, yy});
                parent[xx][yy] = {a, b};
                adj[xx][yy] = '#';
            }
        }
    }

    if (adj[fi][fj] == 'B')
    {
        cout << "NO" << endl;
        return 0;
    }

    string res = "";
    while (parent[fi][fj].first != -1)
    {
        int u, v;
        u = parent[fi][fj].first;
        v = parent[fi][fj].second;
        res += getParent(u, v, fi, fj);
        fi = u;
        fj = v;
    }
    reverse(res.begin(), res.end());
    cout << "YES" << endl;
    cout << res.size() << endl;
    cout << res << endl;
    return 0;
}