#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int vis[101][101];
int dp[101][101];

int32_t main(){

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int grid[n][m];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        queue<pair<int, int>> q;
        q.push({1, 1});
        memset(dp, 0, sizeof dp);
        memset(vis, 0, sizeof vis);
        vis[1][1] = 1;

        while(!q.empty()) {
            
            int a = q.front().first;
            int b = q.front().second;
            q.pop();

            
        }
    }
    return 0;
}