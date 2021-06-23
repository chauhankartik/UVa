#include<bits/stdc++.h>
using namespace std;
#define int long long int

int dx[] = {1, -1, 2, -2, 1, 2, -1, -2};
int dy[] = {2, 2, 1, 1, -2, -1, -2, -1};

int dp[8][8];
int visited[8][8];

int32_t main() {

    int t; cin >> t;
    while(t--) {
        memset(visited, 0, sizeof visited);
        memset(dp, 0, sizeof dp);
        string a, b;
        cin >> a >> b;
        queue<pair<int, int>> q;
        q.push({a[0] - 'a', a[1] - '1'});
        visited[a[0] - 'a'][a[1] - '1'] = 1;
        while(!q.empty()) {
            int m = q.front().first;
            int n = q.front().second;
            q.pop();

            for(int i = 0; i < 8; ++i) {
                int xx = m + dx[i];
                int yy = n + dy[i];

                if(xx < 0 || xx >= 8 || yy < 0 || yy >= 8) continue;
                else {
                    if(visited[xx][yy]) continue;
                    q.push({xx, yy});
                    visited[xx][yy] = 1;
                    dp[xx][yy] = 1 + dp[m][n];
                }           
            }
        }

        cout << dp[b[0]-'a'][b[1] - '1'] << endl;
    }
    return 0;
}