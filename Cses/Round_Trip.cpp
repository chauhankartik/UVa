#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
vector<bool> visited(100001);

void dfs(int src)
{
}

int main()
{

    int n, m;
    cin >> n >> m;
    /*
        dfs start from src and visiting src again and then backtrack;
    */
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a -= 1;
        b -= 1;
    }
    return 0;
}