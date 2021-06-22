#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int32_t main() {

    int n, m; cin >> n >> m;
    vector<string> adj;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        adj.push_back(s);
    }

    int res = 0;
    queue<pair<int, int>> q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(adj[i][j] == '.') {
                adj[i][j] = '#';
                q.push({i, j});
                res += 1;

                while(!q.empty()) {
                    int a = q.front().first;
                    int b = q.front().second;
                    q.pop();

                    for(int d = 0; d <= 3; d++) {
                        int xx = a + dx[d];
                        int yy = b + dy[d];

                        if(xx < 0 || xx >= n || yy < 0 || yy >= m) {
                            continue;
                        }

                        if(adj[xx][yy] == '.') {
                            adj[xx][yy] = '#';
                            q.push({xx,yy});
                        }
                    }
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}