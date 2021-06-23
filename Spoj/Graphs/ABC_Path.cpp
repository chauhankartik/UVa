#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0,  0, -1,  1, 1, -1};
int dy[] = { 0, 0, 1, -1, -1, -1, 1,  1 };

int h, w;

vector<string> vec(51);
int dp[51][51];

void dfs(int i, int j, int dist) {
    dp[i][j] = 1 + dist;
    for(int k = 0; k < 7; ++k) {
        int xx = i + dx[k];
        int yy = i + dy[k];
        if(xx < 0 || xx >= h || yy < 0 || yy >= w) {
            continue;
        }
        else {
            if(vec[xx][yy] == vec[i][j] + 1 and dp[xx][yy] < dp[i][j] + 1) { // important
                dfs(xx, yy, dp[i][j]);
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int cs = 0;
    cin >> h >> w;
    while(h && w) {
        memset(dp, 0, sizeof dp);
        ++cs;
        for(int i = 0; i < h; ++i) {
            string s; cin >> s;
            vec[i] = s;
        }

        queue<pair<int, int>> q;
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                if(vec[i][j] == 'A') {
                    q.push({i, j});
                }
            }
        }

        while (!q.empty())
        {
            pair<int, int> currentCell = q.front();
            q.pop();
            dfs(currentCell.first, currentCell.second, 0);
        }
        int res = 0;
        for(int i = 0; i < h; ++i) {
            for(int j = 0; j < w; ++j) {
                res = max(res, dp[i][j]);
            }
        }
        cout << "Case " << cs << ": " << res << endl;
        vec.clear();
        cin >> h >> w;
    }
    return 0;
}