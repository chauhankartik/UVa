#include<bits/stdc++.h>
using namespace std;
#define int long long int

queue<pair<int, int>> q;
bool visited[1005][1005];
int dist[1005][1005];

int dx[] = {-1, 0, 1, 0, 1,  1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, -1,  1};

int32_t main() {
        int r, c, ci, cj;
        cin >> r >> c >> ci >> cj;

        q.push({ci+1, cj+1});
        visited[ci+1][cj+1] = true;

        while(!q.empty()) {
                int m = q.front().first;
                int n = q.front().second;
                q.pop();
                for(int d = 0; d < 8; d++) {
                        int ii = m + dx[d], jj = n + dy[d];
                        if(ii < 1 || ii > r || jj < 1 || jj > c) continue;
                        if(visited[ii][jj]) continue;
                        visited[ii][jj] = true;
                        dist[ii][jj] = 1 + dist[m][n];
                        q.push({ii, jj});
                }
        }

        for(int i = 1; i <= r; i++) {
                for(int j = 1; j <= c; j++) {
                        cout << dist[i][j] << " ";
                }
                cout << "\n";
        }
        return 0;
}